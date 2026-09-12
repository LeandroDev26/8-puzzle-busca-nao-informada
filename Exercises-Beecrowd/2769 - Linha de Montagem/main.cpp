#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, e1, e2, x1, x2;

    while(cin >> n)
    {
        vector<int> linha1;
        vector<int> linha2;
        vector<int> linha1_2;
        vector<int> linha2_1;

        cin >> e1 >> e2;

        for(int i = 0 ; i < n ; i++) { int z; cin >> z; linha1.push_back(z); }
        for(int j = 0 ; j < n ; j++) { int z; cin >> z; linha2.push_back(z); }
        for(int l = 1 ; l < n ; l++) { int z; cin >> z; linha1_2.push_back(z); }
        for(int k = 1 ; k < n ; k++) { int z; cin >> z; linha2_1.push_back(z); }

        cin >> x1 >> x2;

        int atualLinha1 = 0, atualLinha2 = 0, melhortempo = 0;

        for(int y = 0; y < n; y++)
        {
            if(y == 0)
            {
                atualLinha1 = (e1 + linha1[y]);
                atualLinha2 = (e2 + linha2[y]);
            }
            else
            {
                int antigoL1 = atualLinha1;
                int antigoL2 = atualLinha2;

                atualLinha1 = min(antigoL1 + linha1[y], antigoL2 + linha2_1[y - 1] + linha1[y]);


                atualLinha2 = min(antigoL2 + linha2[y], antigoL1 + linha1_2[y - 1] + linha2[y]);
            }
        }

        atualLinha1 += x1;
        atualLinha2 += x2;

        melhortempo = min(atualLinha1, atualLinha2);

        cout << melhortempo << endl;
    }

    return 0;
}
