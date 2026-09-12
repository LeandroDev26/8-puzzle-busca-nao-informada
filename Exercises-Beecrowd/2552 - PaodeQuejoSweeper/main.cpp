#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n, m ;

    while(cin>> n >> m)
    {
        vector<vector<int>> matriz(n, vector<int>(m));
        int cont;
        for(int i = 0 ; i < n; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                cin>> matriz[i][j];
            }
        }

        for(int l = 0 ; l < n; l++)
        {
            for(int k = 0 ; k < m ; k++)
            {

                if(matriz[l][k] == 1 )
                {
                    cout<< 9 ;
                }
                else
                {
                    cont = 0;

                    if(l > 0 && (matriz[l - 1][k] == 1))
                    {
                        cont++;
                    }

                    if(l < (n - 1) && (matriz[l + 1][k] == 1))
                    {
                        cont++;

                    }
                    if(k > 0 && (matriz[l][k-1] == 1))
                    {
                        cont++;
                    }
                    if(k < (m - 1) && (matriz[l][k + 1] == 1))
                    {
                        cont++;

                    }

                    cout<<cont ;

                }
            }

            cout<<endl;


        }


    }
    return 0;

}
