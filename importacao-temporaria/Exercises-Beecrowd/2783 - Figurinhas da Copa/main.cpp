#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, c, m, xi, yi;
    vector<int> figurinhasCarimbadas;
    vector<int>figurinhasCompradas;

    cin>> n >> c >> m;

    for(int i = 0 ; i < c ; i++)
    {
        cin>> xi;
        figurinhasCarimbadas.push_back(xi);
    }

    for(int j = 0; j < m; j++)
    {
        cin>>yi;
        figurinhasCompradas.push_back(yi);
    }

    int cont = 0;
    for(int l = 0 ; l < c ; l++)
    {


        for(int k = 0 ; k < m; k++)
        {
            if(figurinhasCarimbadas[l] == figurinhasCompradas[k])
            {
                cont++;
                break;
            }

        }
    }

    int falta = (c - cont);

    cout<<falta<<endl;








    return 0;
}
