#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{


    int n;
    string cifra = "";
    map<int, char> alfabeto;

    int numero = 1;
    for (char letra = 'a'; letra <= 'z'; letra++)
    {
        alfabeto[numero] = letra;
        numero++;
    }

    while(cin>> n)
    {
        cin.ignore();
        for(int i = 0; i < n ; i++ )
        {
            getline(cin, cifra);

            int numpont = 0;
            int numbranco = 0;


            for(int j = 0; j < cifra.length(); j++)
            {
                if(cifra[j] == '.')
                {
                    numpont++;

                }
                else if(cifra[j] == ' ')

                {
                    numbranco++;
                }
            }
            int indice = (numbranco * 3) + (numpont / (numbranco + 1));
            cout<< alfabeto[indice]<<endl;

        }
    }





    return 0;
}
