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
       fracao = ( 1 / (6 + fracao));
    }
   cout<< fracao + 3 <<endl;


    return 0;
}
