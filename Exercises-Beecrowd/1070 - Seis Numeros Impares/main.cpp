#include <iostream>

using namespace std;

int main()
{

    int x ;
    cin>> x ;
    int pare = x + 11;

    for(int i = x; i <= pare; i++ )
    {
        if( i % 2 == 1)
        {

            cout<< i <<endl;
        }
    }



    return 0;
}
