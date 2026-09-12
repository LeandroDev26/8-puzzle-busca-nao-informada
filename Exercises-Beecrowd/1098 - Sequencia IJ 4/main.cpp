#include <iostream>
using namespace std;

int main()
{


    double i = 0.0, j;
    while( i < 2.1)
    {

        j = i + 1;

        for(int n = 0; n < 3; n++)
        {
            cout<<"I="<< i << " J=" << j <<endl;
            j++;
        }

        i += 0.2;



    }




    return 0;
}
