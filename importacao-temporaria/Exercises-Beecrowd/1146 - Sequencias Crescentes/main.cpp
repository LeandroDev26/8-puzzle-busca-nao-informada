#include <iostream>

using namespace std;

int main()
{
    int x = 0;

    while(1)
    {

        cin>> x ;
        if( x == 0)
        {
            break;
        }

        for( int i = 1 ; i <= x; i++)
        {

            if(i  == x)
            {

                cout<< i <<endl;

            }
            else
            {
              cout<< i <<" ";
            }


        }




    }








    return 0;
}
