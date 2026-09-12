#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int c , n , m ;

    cin>> c ;
    for(int i = 0; i < c; i++)
    {
        cin>> n >> m;
        double temp = log10(n);
        int result =  temp * m;
        cout<< result + 1 <<endl;
    }
    return 0;
}
