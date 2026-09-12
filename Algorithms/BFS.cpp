#include <iostream>
#include <queue>
#include <unordered_set>
#include "nodes.cpp"
using namespace std;

int main() {
    // grafo simples: cada número "gera" número+1 e número+2 como sucessores
    int inicio = 0;
    int objetivo = 5;

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
