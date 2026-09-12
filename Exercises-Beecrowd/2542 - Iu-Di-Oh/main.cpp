#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n, m, l, x, y, cm, cl, a;
    while(cin>> n)
    {
        cin>> m >> l;
        vector<vector<int>> matrizM(m, vector<int>(n));
        vector<vector<int>> matrizL(l, vector<int>(n));


        for(int i = 0 ; i < m; i++)
        {
            for(int j = 0; j < n ; j++ )
            {
                cin>> matrizM[i][j];
            }
        }
        for(int k = 0 ; k < l; k++)
        {
            for(int x = 0; x < n ; x++ )
            {
                cin>>matrizL[k][x];
            }
        }

        cin>> cm >> cl;
        cin>> a;

        if(matrizM[cm-1][a-1] == matrizL[cl-1][a-1])
        {
            cout<<"Empate"<<endl;

        }
        else if(matrizM[cm-1][a-1] > matrizL[cl-1][a-1])
        {
            cout<<"Marcos"<<endl;
        }
        else
        {
            cout<<"Leonardo"<<endl;

        }
    }



    return 0;
}
