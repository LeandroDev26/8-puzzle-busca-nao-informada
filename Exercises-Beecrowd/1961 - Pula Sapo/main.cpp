#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{

    int p, n, x, diferenca;
    vector<int> altura;
    cin>> p >> n;

    for (int i = 0 ; i < n; i++)
    {
        cin>> x ;
        altura.push_back(x);

    }

    for( int j = 0 ; j < altura.size() - 1; j++)
    {

        diferenca = abs(altura[j] - altura[j+1]);

        if(diferenca > p )
        {
            cout<< "GAME OVER" <<endl; // perdeu
            return 0;
        }


    }

    cout<< "YOU WIN"<<endl;  //ganhou



    return 0;
}
