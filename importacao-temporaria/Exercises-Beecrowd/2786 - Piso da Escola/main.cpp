#include <iostream>

using namespace std;

int main()
{

    int l, c ;
    cin>> l >> c;

    int tipo1 = ( (l*c) + ((l-1) * (c-1)));
    int tipo2 = ( 2*(l - 1) + ( 2*(c-1)));

    cout<<tipo1<<endl;
    cout<<tipo2<<endl;




    return 0;
}
