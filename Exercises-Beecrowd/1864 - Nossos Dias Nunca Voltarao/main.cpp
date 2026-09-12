#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n ;
    cin>> n;
    string texto = "LIFE IS NOT A PROBLEM TO BE SOLVED";

     if ( n > 34){
        return 0;
     }

    for (int i = 0; i < n; i ++)
    {
        cout << texto[i];
    }

      cout<<endl;

    return 0;
}
