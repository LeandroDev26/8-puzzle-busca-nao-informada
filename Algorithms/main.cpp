#include <iostream>
#include <array>
#include <utility>
#include <vector>
using namespace std;

vector<array<int,9>> gerarSucessores(array<int,9> estado)
{
// encontrar a posição do 0
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

    cout << "Zero esta na posicao " << pos
         << " (linha " << linha << ", coluna " << coluna << ")\n";

    vector<array<int,9>> sucessores;

    if(linha > 0)
    {
        // int cima = linha - 1;
        int indicelinearCima = (linha - 1) * 3 + coluna;
        array<int,9> novo_estado = estado;
        swap(novo_estado[pos], novo_estado[indicelinearCima]);
        sucessores.push_back(novo_estado);

    }
    if(linha < 2)
    {
        //int baixo = linha + 1;
        int indicelinearBaixo = (linha + 1) * 3 + coluna;
        array<int,9> novo_estado = estado;
        swap(novo_estado[pos], novo_estado[indicelinearBaixo]);
        sucessores.push_back(novo_estado);
    }
    if(coluna > 0)
    {
        // int esquerda = coluna - 1;
        int indicelinearEsquerda = linha * 3 + (coluna - 1);
        array<int,9> novo_estado = estado;
        swap(novo_estado[pos], novo_estado[indicelinearEsquerda]);
        sucessores.push_back(novo_estado);
    }
    if(coluna < 2 )
    {
        //int direita = coluna + 1;
        int indicelinearDireita = linha * 3 + (coluna + 1);
        array<int,9> novo_estado = estado;
        swap(novo_estado[pos], novo_estado[indicelinearDireita]);
        sucessores.push_back(novo_estado);
    }

    return sucessores;
}

int main()
{

    array<int,9> estado = {0,1,2,3,4,5,6,7,8}; // 0 é o vazio
    // outro exemplo de teste 0,1,2,3,4,5,6,7,8 saída esperada : 2

    vector<array<int,9>> vizinhos = gerarSucessores(estado);

    cout << "Total de vizinhos gerados: " << vizinhos.size() << "\n";

}
