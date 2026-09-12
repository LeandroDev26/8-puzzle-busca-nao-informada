#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m, c, n;
    double ira, totn, totc;

    cout << fixed << setprecision(4);

    while (cin >> m)
    {
        totn = 0;
        totc = 0;
        ira = 0;

        for(int i = 0; i < m; i++)
        {
            cin >> n >> c;

            totn += (n * c);

            totc += c;
        }

        ira = (totn) / (totc * 100);

        cout << ira << endl;
    }

    return 0;
}
