#include <iostream>

using namespace std;

int main()
{


    int n, t, menor, posicao = 0;
    cin>> n ;

    cin>> menor;

    for (int i = 1 ; i < n ; i++)
    {
        cin>> t;

        if(t < menor)
        {
            menor = t ;
            posicao = i + 1;
        }


    }

    cout<< posicao <<endl;


    return 0;
}
