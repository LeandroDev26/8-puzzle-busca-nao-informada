#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    cout<< fixed << setprecision(10);
    double n, fracao = 0.0;
    cin>> n;

    for(int i = 0 ; i < n ; i++)
    {
       fracao = ( 1 / (2 + fracao));
    }
   cout<< fracao + 1 <<endl;


    return 0;
}
