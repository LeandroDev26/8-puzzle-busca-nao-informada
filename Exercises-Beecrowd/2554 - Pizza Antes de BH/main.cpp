#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n, d, pessoa;
    string data, dataEscolhida;
    while(cin>> n >> d)
    {
        for(int i = 0; i < d ; i++)
        {
            cin>> data;
            bool todo_mundo_pode = true;


            for(int j = 0; j < n ; j++)
            {
                cin>> pessoa;
                if(pessoa == 0)
                {
                    todo_mundo_pode = false;
                }
            }
            if(todo_mundo_pode)
            {
                if(dataEscolhida.empty())
                {
                    dataEscolhida = data;
                }
            }
        }

        if(!dataEscolhida.empty())
        {
            cout<<dataEscolhida<<endl;
            dataEscolhida.clear();

        }
        else
        {
            cout<<"Pizza antes de FdI"<<endl;
        }


    }


    return 0;
}
