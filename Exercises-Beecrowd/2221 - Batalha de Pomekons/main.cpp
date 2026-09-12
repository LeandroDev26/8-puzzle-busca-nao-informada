#include <iostream>
#include <vector>

using namespace std;

int main()
{

 int t, b, a1, d1, l1, a2, d2, l2;
    cin >> t;

    for(int i = 0 ; i < t; i++)
    {
        cin >> b;

        cin >> a1 >> d1 >> l1;
        int golpeDabriel = (a1 + d1) / 2;
        if(l1 % 2 == 0) {
            golpeDabriel += b;
        }

        cin >> a2 >> d2 >> l2;
        int golpeGuarte = (a2 + d2) / 2;
        if(l2 % 2 == 0) {
            golpeGuarte += b;
        }

        if(golpeDabriel > golpeGuarte)
        {
            cout << "Dabriel" << endl;
        }
        else if(golpeDabriel < golpeGuarte)
        {
            cout << "Guarte" << endl;
        }
        else
        {
            cout << "Empate" << endl;
        }
    }
    return 0;
}
