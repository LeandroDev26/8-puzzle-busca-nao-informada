#include <iostream>

using namespace std;

int main()
{

    int ci  = 0 , position = 0;
    for(int i = 0 ; i < 4; i++)
    {
        cin>> ci;
        if(ci == 1)
        {
           position = i+1;

        }

    }
      cout<<position<<endl;







    return 0;
}
