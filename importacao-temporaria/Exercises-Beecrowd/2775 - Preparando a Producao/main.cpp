#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        vector<int> id(n);
        vector<int> tempo(n);

        for(int i = 0; i < n; i++)
        {
            cin >> id[i];
        }

        for(int j = 0; j < n; j++)
        {
            cin >> tempo[j];
        }

        int tempo_total = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {

                if (id[j] > id[j + 1])
                {

                    tempo_total += tempo[j] + tempo[j + 1];

                    swap(id[j], id[j + 1]);

                    swap(tempo[j], tempo[j + 1]);
                }
            }
        }

        cout << tempo_total << endl;
    }

    return 0;
}
