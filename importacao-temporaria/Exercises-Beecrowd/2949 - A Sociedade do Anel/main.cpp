#include <iostream>

using namespace std;

int main()
{
    string nome ;
    char tipo;
    int n, hobbits = 0, humanos = 0, elfos = 0, magos = 0, anoes = 0 ;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        cin>> nome >> tipo;
        if(tipo == 'A')
        {
            anoes++;
        }
        else  if(tipo == 'E')
        {
            elfos++;
        }
        else  if(tipo == 'H')
        {
            humanos++;
        }
        else  if(tipo == 'M')
        {
            magos++;
        }
        else
        {
            hobbits++;
        }
    }
    cout<< hobbits << " Hobbit(s)"<<endl;
    cout<< humanos << " Humano(s)"<<endl;
    cout<< elfos << " Elfo(s)"<<endl;
    cout<< anoes << " Anao(oes)"<<endl;
    cout<< magos << " Mago(s)"<<endl;
    return 0;
}
