#include <iostream>

using namespace std;

int main()
{

    int n ;

    while(cin>> n)
    {
        int cont = 0;
        if(n == 1)
        {
            cout<< 0 <<endl;
        }
        else
        {


            while(n > 1)
            {

                n /= 2;
                cont++;
            }

            cout<< cont <<endl;

        }




    }








    return 0;
}
