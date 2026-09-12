#include <iostream>

using namespace std;

int main()
{
    int i = 1, j = 7, aux = 5;

    while( i <= 9)
    {

        while( j >= aux )
        {

            cout<< "I=" << i <<  " J=" << j <<endl;
            j --;


        }

        i += 2;
        j += 5;
        aux += 2;



    }


    return 0;
}
