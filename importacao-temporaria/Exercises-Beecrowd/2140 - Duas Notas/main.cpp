#include <iostream>

using namespace std;

int main()
{

    int n, m, soma, troco = 0 ;
    int notas [6] = { 2, 5, 10, 20, 50, 100};

    while(cin>> n >> m && n != 0 && m != 0)
    {
        // As notas disponiveis sao: 2, 5, 10, 20, 50 e 100.

        bool possivel = false;
        troco = m - n;

        for(int i = 0 ; i < 6; i++)
        {
            for(int j = 0 ; j < 6 ; j++)
            {
                soma = notas[i] + notas[j];

                if(soma == troco)
                {
                    possivel = true;
                    break;
                }
            }
        }

        if(possivel == true)
        {
            cout<< "possible"<<endl;
        }
        else
        {
            cout<< "impossible"<<endl;

        }

    }





    return 0;
}
