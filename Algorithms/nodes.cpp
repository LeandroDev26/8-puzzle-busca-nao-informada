#include <iostream>
#include <memory>
#include <vector>
#include <string>
using namespace std;

struct No {
    int valor;
    shared_ptr<No> pai;
    string acao;
    int profundidade;
};

int main() {
    auto raiz = make_shared<No>(No{0, nullptr, "INICIO", 0});
    auto filho = make_shared<No>(No{1, raiz, "PASSO1", 1});
    auto neto  = make_shared<No>(No{2, filho, "PASSO2", 2});

    // reconstruir caminho subindo pelos pais
    vector<string> caminho;
    shared_ptr<No> atual = neto;
    while (atual != nullptr) {
        caminho.push_back(atual->acao);
        atual = atual->pai;
    }

    // caminho está do fim pro começo, então inverte
    for (int i = caminho.size() - 1; i >= 0; i--) {
        cout << caminho[i] << " ";
    }
    cout << "\n";
}
