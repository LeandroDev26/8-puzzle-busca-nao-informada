#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int idade = 0, cont = 0;
    double media = 0;

    cin>> idade;

    while(idade >= 0)
    {

        media += idade;
        cont++;


        cin>> idade;



    }
    media /= cont;
    cout<< fixed << setprecision(2);
    cout<< media<<endl;





    return 0;
}
