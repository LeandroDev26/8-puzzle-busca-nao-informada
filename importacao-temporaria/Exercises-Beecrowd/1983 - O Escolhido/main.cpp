#include <iostream>

using namespace std;

int main()
{



    int n, m, matricula = 0;
    double nota, maior = 0;
    cin>> n ;

    for(int i = 0 ; i < n ; i++)
    {
        cin>> m >> nota;

        if(nota >= 8)
        {
            if(maior < nota)
            {
                maior = nota;
                matricula = m;

            }

        }


    }


    if(maior > 0)
    {
        cout<< matricula <<endl;
    }
    else
    {
        cout<< "Minimum note not reached"<<endl;
    }



    return 0;
}
