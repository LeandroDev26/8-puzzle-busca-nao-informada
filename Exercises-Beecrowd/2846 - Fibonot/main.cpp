#include <iostream>

using namespace std;

int main()
{

    int k ;
    int a = 2, b = 3, totfibonot = 0, anterior = 0;
    cin>> k ;

    while(totfibonot < k)
    {
        anterior = totfibonot;
        int quantidade = (b - a)- 1;
        totfibonot += quantidade;

        if(totfibonot < k)
        {
            int proximo = (a+b);
            a = b ;
            b = proximo;
        }
    }
    int passos = k - anterior;
    int resposta = a + passos;

    cout<< resposta<<endl;







    return 0;
}
