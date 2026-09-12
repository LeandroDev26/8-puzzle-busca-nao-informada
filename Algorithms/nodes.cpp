#include <iostream>
#include <memory>
#include <vector>
#include <string>
using namespace std;

struct No {
    array<int,9> estado;
    shared_ptr<No> pai;
    string acao;
    int profundidade;
};
/*
int main() {
    auto raiz = make_shared<No>(No{ {0,1,2,3,4,5,6,7,8}, nullptr, "vazio primeiro elemento", 0});
    auto filho = make_shared<No>(No{{1,2,3,4,0,5,6,7,8}, raiz, "vazio elemento centro", 1});
    auto neto  = make_shared<No>(No{{1,2,3,4,5,6,0,7,8}, filho, "vazio setimo elemento", 2});

    // reconstruir caminho subindo pelos pais
    vector<string> caminho;
    shared_ptr<No>atual = neto;
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
*/
