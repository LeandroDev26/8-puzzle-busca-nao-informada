#include <iostream>
#include <vector>
#include <array>
#include <queue>
#include <unordered_set>
#include <memory>
#include <string>
#include <utility>
#include <stack>
#include <algorithm>
#include <chrono>
#include <iomanip>

using namespace std;

// Estrutura do Nó
struct No
{
    array<int,9> estado;
    shared_ptr<No> pai;
    string acao;
    int profundidade;
};

// Hash atráves de conversão estado para string
string paraChave(const array<int,9>& estado)
{
    string s = "";
    for (int v : estado)
    {
        s += (char)(v + '0');
    }
    return s;
}

// Função gerarSucessores
vector<pair<array<int,9>, string>> gerarSucessores(array<int,9> estado)
{
    int pos = -1;
    for (int i = 0; i < 9; i++)
    {
        if (estado[i] == 0)
        {
            pos = i;
            break;
        }
    }

    int linha = pos / 3;
    int coluna = pos % 3;

    vector<pair<array<int,9>, string>> sucessores;

    if(linha > 0)
    {
        int indicelinearCima = (linha - 1) * 3 + coluna;
        array<int,9> novo_estado = estado;
        swap(novo_estado[pos], novo_estado[indicelinearCima]);
        sucessores.push_back({novo_estado, "Mover zero para Cima"});
    }
    if(linha < 2)
    {
        int indicelinearBaixo = (linha + 1) * 3 + coluna;
        array<int,9> novo_estado = estado;
        swap(novo_estado[pos], novo_estado[indicelinearBaixo]);
        sucessores.push_back({novo_estado, "Mover zero para Baixo"});
    }
    if(coluna > 0)
    {
        int indicelinearEsquerda = linha * 3 + (coluna - 1);
        array<int,9> novo_estado = estado;
        swap(novo_estado[pos], novo_estado[indicelinearEsquerda]);
        sucessores.push_back({novo_estado, "Mover zero para Esquerda"});
    }
    if(coluna < 2 )
    {
        int indicelinearDireita = linha * 3 + (coluna + 1);
        array<int,9> novo_estado = estado;
        swap(novo_estado[pos], novo_estado[indicelinearDireita]);
        sucessores.push_back({novo_estado, "Mover zero para Direita"});
    }

    return sucessores;
}

// Função auxiliar para visualizar a matriz 3x3
void imprimirEstado(const array<int, 9>& estado)
{
    for (int i = 0; i < 9; i++)
    {
        cout << estado[i] << " ";
        if (i % 3 == 2) cout << "\n";
    }
    cout << "------\n";

}

void resolverBFS(array<int,9> inicio, array<int,9> objetivo)
{
    cout<<"\n";
    cout << "\n=== INICIANDO BUSCA EM LARGURA (BFS) ===\n";
    auto inicio_tempo = chrono::high_resolution_clock::now();
    auto raiz = make_shared<No>(No{inicio, nullptr, "Estado Inicial", 0});

    queue<shared_ptr<No>> fronteira;

    unordered_set<string> visitados;

    fronteira.push(raiz);
    bool encontrado = false;
    visitados.insert(paraChave(inicio));
    int nodesExpandidos = 0;
    auto pico = fronteira.size();

    while (!fronteira.empty())
    {
        shared_ptr<No> atual = fronteira.front();
        pico = max(pico, fronteira.size());
        fronteira.pop();

        if (atual->estado == objetivo)
        {
            encontrado = true ;
            auto fim_tempo = chrono::high_resolution_clock::now();
            auto duracao = chrono::duration_cast<chrono::milliseconds>(fim_tempo - inicio_tempo);

            cout << "Objetivo encontrado em " << atual->profundidade << " jogadas!\n\n";
            cout << "O algoritmo vasculhou " << visitados.size() << " tabuleiros diferentes.\n\n";

            cout<<"Quantidade de nos expandidos(visitados):" << nodesExpandidos << "\n";
            cout << "Pico da fronteira: " << pico << "\n";
            cout << "Tempo: " << duracao.count() << " ms\n";

            vector<shared_ptr<No>> caminho_vitoria;
            shared_ptr<No> rastreador = atual;

            while (rastreador != nullptr)
            {
                caminho_vitoria.push_back(rastreador);
                rastreador = rastreador->pai;
            }

            cout<<"\n";
            cout << "--- PASSO A PASSO ---\n";
            for (auto it = caminho_vitoria.rbegin(); it != caminho_vitoria.rend(); ++it)
            {
                cout << "Acao: " << (*it)->acao << "\n";
                imprimirEstado((*it)->estado);
            }

            break;
        }

        auto vizinhos = gerarSucessores(atual->estado);
        nodesExpandidos++;
        for (auto& vizinho : vizinhos)
        {
            array<int, 9> estado_sucessor = vizinho.first;
            string acao = vizinho.second;

            string chave_sucessor = paraChave(estado_sucessor);


            if (visitados.find(chave_sucessor) == visitados.end())
            {
                visitados.insert(chave_sucessor);

                auto filho = make_shared<No>(No{estado_sucessor, atual, acao, atual->profundidade + 1});
                fronteira.push(filho);
            }
        }
    }
    if(!encontrado)
    {
        auto fim_tempo = chrono::high_resolution_clock::now();
        auto duracao = chrono::duration_cast<chrono::milliseconds>(fim_tempo - inicio_tempo);
        cout << "Busca esgotada nao existe nenhuma solucao possivel!o algoritmo vasculhou " << visitados.size() << " tabuleiros diferentes.\n\n";
        cout<< "Quantidade de nos expandidos(visitados):" << nodesExpandidos << "\n";
        cout << "Pico da fronteira: " << pico << "\n";
        cout << "Tempo: " << duracao.count() << " ms\n";
    }

}



void resolverDFS(array<int,9> inicio, array<int,9> objetivo)
{
    cout<<"\n";
    cout << "\n=== INICIANDO BUSCA EM PROFUNDIDADE (DFS) ===\n";

    auto inicio_tempo = chrono::high_resolution_clock::now();

    auto raiz = make_shared<No>(No{inicio, nullptr, "Estado Inicial", 0});

    stack<shared_ptr<No>> fronteira;

    unordered_set<string> visitados;

    fronteira.push(raiz);
    visitados.insert(paraChave(inicio));
    bool encontrado = false;
    int nodesExpandidos = 0;
    auto pico = fronteira.size();

    while (!fronteira.empty())
    {
        shared_ptr<No> atual = fronteira.top();
        pico = max(pico, fronteira.size());
        fronteira.pop();


        if (atual->estado == objetivo)
        {
            encontrado = true ;
            auto fim_tempo = chrono::high_resolution_clock::now();
            auto duracao = chrono::duration_cast<chrono::milliseconds>(fim_tempo - inicio_tempo);

            cout << "Objetivo encontrado em " << atual->profundidade << " jogadas!\n\n";
            cout << "O algoritmo vasculhou " << visitados.size() << " tabuleiros diferentes.\n\n";
            cout<< "Quantidade de nos expandidos(visitados):" << nodesExpandidos << "\n";
            cout << "Pico da fronteira: " << pico << "\n";
            cout << "Tempo: " << duracao.count() << " ms\n";

            vector<shared_ptr<No>> caminho_vitoria;
            shared_ptr<No> rastreador = atual;

            while (rastreador != nullptr)
            {
                caminho_vitoria.push_back(rastreador);
                rastreador = rastreador->pai;
            }

            cout<<"\n";
            cout << "--- PASSO A PASSO ---\n";
            for (auto it = caminho_vitoria.rbegin(); it != caminho_vitoria.rend(); ++it)
            {
                cout << "Acao: " << (*it)->acao << "\n";
                imprimirEstado((*it)->estado);
            }

            break;
        }

        auto vizinhos = gerarSucessores(atual->estado);
        nodesExpandidos++;
        for (auto& vizinho : vizinhos)
        {
            array<int, 9> estado_sucessor = vizinho.first;
            string acao = vizinho.second;

            string chave_sucessor = paraChave(estado_sucessor);


            if (visitados.find(chave_sucessor) == visitados.end())
            {

                visitados.insert(chave_sucessor);

                if(atual->profundidade +1 > 20 )continue;

                auto filho = make_shared<No>(No{estado_sucessor, atual, acao, atual->profundidade + 1});
                fronteira.push(filho);
            }
        }
    }

    if(!encontrado)
    {
        auto fim_tempo = chrono::high_resolution_clock::now();
        auto duracao = chrono::duration_cast<chrono::milliseconds>(fim_tempo - inicio_tempo);
        cout << "Busca esgotada sem encontrar solução dentro do limite de profundidade!\n";
        cout<<"Quantidade de nos expandidos(visitados):"<< nodesExpandidos << "\n";
        cout << "Pico da fronteira: " << pico << "\n";
        cout << "Tempo: " << duracao.count() << " ms\n";
    }

}


int main()
{
    // caso1 (trivial)
    array<int, 9> inicio = {1, 2, 3, 4, 5, 0, 7, 8, 6};
    array<int, 9> objetivo = {1, 2, 3, 4, 5, 6, 7, 8, 0};

    resolverBFS(inicio, objetivo);
    resolverDFS(inicio, objetivo);

    return 0;
}
