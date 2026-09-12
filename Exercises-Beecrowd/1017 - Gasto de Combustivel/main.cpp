#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int tgasto, speed;
    double comb;
    cin>> tgasto>> speed;
    int distanciaPercorrida = tgasto * speed;
    comb = distanciaPercorrida / 12.0;

    cout<< fixed << setprecision(3);
    cout<< comb<<"\n";
    return 0;
}
