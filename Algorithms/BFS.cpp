#include <iostream>
#include <queue>
#include <unordered_set>
#include "nodes.cpp"
#include "main.cpp"

using namespace std;

int main() {
    // grafo simples: cada número "gera" número+1 e número+2 como sucessores
    int inicio = 0;
    int objetivo = 5;

    auto raiz = make_shared<No>(No{ {0,1,2,3,4,5,6,7,8}, nullptr, "vazio primeiro elemento", 0});

    queue<shared_ptr<No>> fronteira;
    unordered_set<int> visitados;

    fronteira.push(inicio);
    visitados.insert(inicio);

    while (!fronteira.empty()) {
        int atual = fronteira.front();
        fronteira.pop();

        cout << "Expandindo: " << atual << "\n";

        if (atual == objetivo) {
            cout << "Objetivo encontrado!\n";
            break;
        }

        for (int sucessor : {atual + 1, atual + 2}) {
            if (visitados.find(sucessor) == visitados.end()) {
                visitados.insert(sucessor);
                fronteira.push(sucessor);
            }
        }
    }
}
