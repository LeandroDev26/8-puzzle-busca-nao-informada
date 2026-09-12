#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> terreno(n, vector<int>(m));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> terreno[i][j];
        }
    }
    bool achou = false;

    for(int l = 1 ; l < n - 1; l++)
    {
        for(int k = 1 ; k < m - 1; k++)
        {
            if(terreno[l][k] == 42)
            {
                // Checa as 8 posições ao mesmo tempo!
                if( terreno[l-1][k-1] == 7 && terreno[l-1][k] == 7 && terreno[l-1][k+1] == 7 &&
                    terreno[l][k-1]   == 7 &&                         terreno[l][k+1]   == 7 &&
                    terreno[l+1][k-1] == 7 && terreno[l+1][k] == 7 && terreno[l+1][k+1] == 7 )
                {
                    cout << l + 1 << " " << k + 1 << endl;
                    achou = true;
                    break;
                }
            }
        }
        if (achou) break;
    }

    if(!achou)
    {
        cout << "0 0" << endl;
    }

}
