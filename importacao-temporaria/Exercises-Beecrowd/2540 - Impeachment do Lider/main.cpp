#include <iostream>

using namespace std;

int main()
{

    int n ;
    while(cin>> n)
    {
        double notaCorte = 0, favoraveis = 0, x = 0, totVotos = n;
        for(int i = 0 ; i < n ; i++)
        {
            cin>> x ;
            if(x == 1)
            {
                favoraveis++;
            }
        }

        notaCorte = ((totVotos /3.0)*2.0);
        if(favoraveis >= notaCorte)
        {
            cout<< "impeachment"<<endl;
        }
        else
        {
            cout<<"acusacao arquivada"<<endl;
        }

    }

    return 0;
}
