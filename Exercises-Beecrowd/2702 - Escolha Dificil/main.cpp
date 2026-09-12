#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int c, b, p, cr, br, pr, passa = 0;
    cin>> c >> b >> p;
    cin>> cr >> br >> pr;
    if(cr > c)
    {
        passa += abs(c - cr);
    }
    if(br > b)
    {
        passa += abs(b- br);
    }
    if(pr > p)
    {
        passa += abs(p - pr);
    }
    cout<<passa<<endl;


    return 0;
}
