#include <iostream>
using namespace std;

int main()
{
    int m, n, x = 7, sum = 0;


    while(x > 0)
    {

        m = 0, n = 0;
        cin>> m >> n;

        if(m <= 0 || n <=0)
        {
            break;
        }

        if(n < m)
        {
            int aux = m;
            m = n;
            n = aux;

        }

        sum = 0;
        for(int i = m; i <= n; i++)
        {
            cout<< i << " ";
            sum += i;
        }

        cout<<"Sum="<<sum<<endl;



    }





    return 0;


}








