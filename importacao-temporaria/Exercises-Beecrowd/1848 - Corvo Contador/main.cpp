#include <iostream>
#include <string>

using namespace std;

int main()
{

    string corvo;
    int soma = 0, gritos = 0;


    while(gritos < 3)
    {
        getline(cin, corvo);

        if(corvo == "---")
        {
            soma += 0;
        }
        else if( corvo == "--*")
        {
            soma += 1;
        }
        else if( corvo == "-*-")
        {
            soma += 2;
        }
        else if( corvo == "-**")
        {
            soma += 3;
        }
        else if( corvo == "*--")
        {
            soma += 4;
        }
        else if( corvo == "*-*")
        {
            soma += 5;
        }
        else if( corvo == "**-")
        {
            soma += 6;
        }
        else if( corvo == "***")
        {
            soma += 7;
        }
        else if (corvo == "caw caw")
        {
            cout<< soma << endl;
            soma = 0;
            gritos++;
        }
    }








    return 0;
}
