#include <iostream>
#include <string>
using namespace std;

int main()
{

    int t, r, g, b;
    string conversao;
    cin>> t ;

    for(int i = 0 ; i < t; i++)
    {
        cin>> conversao >> r >> g >> b;

        if(conversao == "min")
        {
            int mini = 1000;

            if(r < mini)
            {
                mini = r;
            }
            if(g < mini)
            {
                mini = g;
            }
            if(b < mini)
            {
                mini = b;
            }

            cout<<"Caso #"<< i+1 <<": "<< mini <<endl;
        }
        else if(conversao == "max")
        {
            int maxi = -1;

            if(r > maxi)
            {
                maxi = r;
            }
            if(g > maxi)
            {
                maxi = g;
            }
            if(b > maxi)
            {
                maxi = b;
            }

            cout<<"Caso #"<< i+1 <<": "<< maxi <<endl;
        }

        else if(conversao ==  "mean")
        {
            int media = 0;
            media = (r + g + b)/3;
            cout<< "Caso #"<< i+1 <<": "<< media<<endl;
        }
        else if(conversao == "eye")
        {
            int p = 0;
            p = (0.30*(double)r + 0.59*(double)g + 0.11*(double)b );
            cout<< "Caso #"<< i+1 <<": "<< p <<endl;

        }

    }


    return 0;
}
