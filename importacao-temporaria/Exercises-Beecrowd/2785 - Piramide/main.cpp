#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n ;
    cin>> n ;

    vector<vector<int>> matriz (n, vector<int> (n));

    for(int i = 0 ; i < n; i++)
    {


        for(int j = 0 ; j < n ; j++)
        {
            cin>> matriz[i][j];
        }
    }

    vector<vector<int>> prefixos(n, vector<int>(n, 0));


    for(int i = 0; i < n; i++)
    {
        prefixos[i][0] = matriz[i][0];

        for(int j = 1; j < n; j++)
        {
            prefixos[i][j] = prefixos[i][j-1] + matriz[i][j];
        }
    }

    vector<vector<int>> dp(n, vector<int>(n, 0));

    for(int j = 0; j < n; j++)
    {
        dp[0][j] = matriz[0][j];
    }

    for(int i = 1; i < n; i++)
    {


        for(int j = 0; j <= n - (i + 1); j++)
        {

            int esquerda = j;
            int direita = j + i;

            int soma_bloco = prefixos[i][direita];
            if (esquerda > 0)
            {
                soma_bloco = soma_bloco - prefixos[i][esquerda - 1];
            }


            dp[i][j] = soma_bloco + min(dp[i-1][j], dp[i-1][j+1]);
        }
    }



    cout << dp[n-1][0] << endl;





    return 0;
}
