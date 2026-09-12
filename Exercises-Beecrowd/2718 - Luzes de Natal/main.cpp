#include <iostream>
using namespace std;

int main()
{
    int n;
    unsigned long long x;
    cin>> n ;
    for(int i = 0 ; i < n ; i++)
    {
        cin>> x;
        int atual = 0, maximo = 0;
        while(x > 0)
        {
            if(x % 2 == 1)
            {
                atual ++;
                if(atual > maximo)
                {
                    maximo = atual;
                }

            }
            else
            {
                atual = 0;

            }
            x /= 2;

        }
        cout<< maximo<<endl;


    }



    return 0;
}
