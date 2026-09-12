#include <iostream>

using namespace std;

int main()
{

    int n, amin, amax, avis, tot;

    while(cin>> n >> amin >> amax)
    {

        tot = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin>> avis;

            if(avis >= amin && avis <= amax)
            {
                tot++;

            }
        }
        cout<< tot <<endl;
    }

    return 0;
}
