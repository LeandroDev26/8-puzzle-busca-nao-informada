#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int n, h, m, o;
    cin>> n ;
    for(int i = 0 ; i < n ; i++)
    {
        cin>> h >> m >> o;

        cout << setfill('0') << setw(2) << h << ":"
             << setfill('0') << setw(2) << m << " - A porta ";

        if(o == 0)
        {
            cout << "fechou!" << endl;
        }
        else
        {
            cout << "abriu!" << endl;
        }
    }


    return 0;
}
