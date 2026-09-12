#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    cout<< fixed << setprecision(2);
    double tempo;
    string frase;
    int c ;
    cin>> c;
    for(int i = 0 ; i < c ; i++)
    {
         cin>> frase ;
         tempo = frase.length();
         cout<< tempo / 100.0 <<endl;

    }

    return 0;
}
