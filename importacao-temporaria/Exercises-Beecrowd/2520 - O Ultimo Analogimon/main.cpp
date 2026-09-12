#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n, m ;
    // n e o numero de linhas e o m e o numero de colunas
    while(cin>> n >> m)
    {
        vector<vector<int>> matriz(n, vector<int>(m));
        int x1 = 0, y1 = 0, x2  = 0, y2 = 0, distanciavertical = 0, distanciahorizontal = 0, tempoMinimo =  0;
        for(int i = 0 ;  i < n; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                cin>> matriz[i][j];
                if(matriz[i][j] == 1)
                {
                    x1 = i;
                    y1 = j;
                }
                else  if(matriz[i][j] == 2)
                {
                    x2 = i;
                    y2 = j;
                }

            }


        }
        distanciavertical = abs(x1 - x2);
        distanciahorizontal = abs(y1 - y2);
        tempoMinimo = (distanciavertical + distanciahorizontal);
        cout<<tempoMinimo <<endl;
        matriz.clear();

    }

    return 0;
}
