#include <iostream>

using namespace std;

int main()
{

    int senha = 2002, e;

    while(1)
    {

        cin>> e;

        if(e == senha)
        {
            cout<<"Acesso Permitido"<<endl;
            break;
        }
        else
        {
            cout<<"Senha Invalida"<<endl;
        }

    }

    return 0;
}
