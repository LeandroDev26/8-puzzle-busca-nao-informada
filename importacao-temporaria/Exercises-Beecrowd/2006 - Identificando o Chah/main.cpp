#include <iostream>

using namespace std;

int main()
{

    int t, num, correct = 0;
    cin>> t ;

    for(int i = 0 ; i < 5 ; i++)
    {

        cin>> num ;
        if(num == t)
        {
            correct++;
        }

    }

    cout<< correct <<endl;


    return 0;
}
