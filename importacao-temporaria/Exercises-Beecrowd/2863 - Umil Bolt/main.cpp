#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int t ;
    double num;
    while (cin>> t)
    {
        double menor = 111;
        for(int i = 0; i < t; i++)
        {
            cin>> num;
            if(num < menor)
            {
                menor = num;
            }
        }

        cout<< fixed <<setprecision(2);
        cout<< menor <<endl;

    }


    return 0;
}
