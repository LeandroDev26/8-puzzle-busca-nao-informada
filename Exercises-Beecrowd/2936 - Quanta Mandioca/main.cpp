#include <iostream>

using namespace std;

int main()
{
    int  porc1 , porc2 , porc3 , porc4 , porc5 ;
    cin>> porc1 >> porc2 >> porc3 >> porc4 >> porc5 ;
    int total = ((porc1*300)+(porc2*1500)+(porc3*600)+(porc4*1000)+(porc5*150) + 225);
    cout<<total<<endl;
    return 0;
}
