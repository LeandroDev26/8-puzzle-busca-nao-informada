#include <iostream>
#include <string>

using namespace std;

int main()
{

    string frase;

    while(getline(cin, frase))
    {

        if(frase == "esquerda")
        {
            cout<<"ingles"<<endl;
        }
        else if( frase == "direita")
        {
            cout<<"frances"<<endl;
        }
        else if(frase == "nenhuma")
        {
            cout<<"portugues"<<endl;
        }
        else
        {
            cout<<"caiu"<<endl;
        }

    }







    return 0;
}
