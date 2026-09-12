#include <iostream>

using namespace std;

int main()
{
    int i = 1, j = 7;

    while( i <= 9)
    {
        j = 7;

        while( j >= 5 )
        {

            cout<< "I=" << i <<  " J=" <<j <<endl;
            j --;


        }

        i+= 2;


    }


    return 0;
}
