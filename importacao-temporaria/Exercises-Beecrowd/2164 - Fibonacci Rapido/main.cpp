#include <iostream>
#include<cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout<< fixed <<setprecision(1);

    double raiz5 = sqrt(5) , n , fibonacci;
    double positivo = ( 1 + raiz5) / 2;
    double negativo = ( 1 - raiz5) / 2;

    cin>> n ;
    fibonacci = (pow(positivo, n) - pow(negativo, n))/raiz5;
    cout<< fibonacci <<endl;





    return 0;
}
