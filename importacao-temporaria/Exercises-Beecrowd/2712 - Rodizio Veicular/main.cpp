#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string placa;
    cin >> n;

    for(int i = 0; i < n ; i++)
    {
        cin >> placa;
        bool ok = true;

        if (placa.size() != 8)
        {
            ok = false;
        }
        else
        {
            for(int j = 0 ; j < 3; j++)
            {
                if(!(placa[j] >= 'A' && placa[j] <= 'Z'))
                {
                    ok = false;
                }
            }

            if(placa[3] != '-')
            {
                ok = false;
            }

            for(int k = 4; k < 8; k++)
            {
                if(!(placa[k] >= '0' && placa[k] <= '9'))
                {
                    ok = false;
                }
            }
        }

        if(!ok)
        {
            cout << "FAILURE" << endl;
        }
        else
        {
            if(placa[7] == '1' || placa[7] == '2')
            {
                cout << "MONDAY" << endl;
            }
            else if(placa[7] == '3' || placa[7] == '4')
            {
                cout << "TUESDAY" << endl;
            }
            else if(placa[7] == '5' || placa[7] == '6')
            {
                cout << "WEDNESDAY" << endl;
            }
            else if(placa[7] == '7' || placa[7] == '8')
            {
                cout << "THURSDAY" << endl;
            }
            else if(placa[7] == '9' || placa[7] == '0')
            {
                cout << "FRIDAY" << endl;
            }
        }
    }

    return 0;
}
