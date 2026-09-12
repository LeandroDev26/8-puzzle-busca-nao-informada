#include <iostream>

using namespace std;

int main()
{


    int n ;
    double c, p, soma = 0.0;
    cin>> n ;

    for(int i = 0 ; i < n; i++)
    {

        cin>> c >> p;
        double u = c/p;
        soma += u;
    }

    if(soma <= 1)
    {
        cout<<"OK"<<endl;
    }
    else
    {
       cout<<"FAIL"<<endl;
    }




    return 0;
}
