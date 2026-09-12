#include <iostream>

using namespace std;

int main()
{
    int n, num = 1;
    cin>> n ;

    for(int i = 0 ; i <n; i++)
    {
        cout<< num <<" "<<(num * num )<< " " << (num* num * num)<<endl;

        cout<< num <<" "<<((num * num)+1 )<< " " << ( (num* num * num)+1 )<<endl;

        num ++;

    }



    return 0;
}
