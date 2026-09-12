#include <iostream>

using namespace std;

int main()
{


    int n ;
    cin>> n;

    /*
     1, V é 5, X é 10, L é 50, C é 100, D é 500 e M representa 1000.
     */
    while ( n > 0)
    {

        if( n - 1000 >= 0 )
        {
            cout<< "M";
            n -= 1000;
        }
        else if( n - 900 >= 0)
        {
            cout<< "CM";
            n-= 900;
        }
        else if( n - 500 >= 0)
        {
            cout<< "D";
            n-= 500;
        }
        else if( n - 400 >= 0)
        {
            cout<< "CD";
            n-= 400;
        }
        else if( n - 100 >= 0)
        {
            cout<< "C";
            n -= 100;
        }
        else if( n - 90 >= 0)
        {
            cout<< "XC";
            n-= 90;
        }
        else if( n - 50 >= 0)
        {
            cout<< "L";
            n -= 50;
        }
        else if( n - 40 >= 0)
        {
            cout<< "XL";
            n-= 40;
        }
        else if( n - 10 >= 0)
        {
            cout<< "X";
            n  -= 10;
        }
        else if( n - 9 >= 0)
        {
            cout<< "IX";
            n-= 9;
        }
        else if( n - 5 >= 0)
        {
            cout<< "V";
            n -= 5;
        }
        else if( n - 4 >= 0)
        {
            cout<< "IV";
            n-= 4;
        }
        else if( n - 1 >= 0)
        {
            cout<< "I";
            n -= 1;
        }

    }

    cout<<endl;
    return 0;
}
