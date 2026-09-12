#include <iostream>

using namespace std;

int main()
{
    int e, pares = 0, impares = 0, positivo = 0, negativo = 0;
    for(int i = 0; i < 5; i++)
    {
        cin>> e ;

        if ( e > 0)
        {
            positivo++;

        }

        if ( e < 0)
        {
            negativo++;

        }

        if ( e % 2 == 0)
        {
            pares++;
        }
        else

        {
            impares++;
        }


    }

    cout<< pares << " valor(es) par(es)"<<endl;
    cout<< impares << " valor(es) impar(es)"<<endl;
    cout<< positivo << " valor(es) positivo(s)"<<endl;
    cout<< negativo << " valor(es) negativo(s)"<<endl;




    return 0;
}
