#include <iostream>

using namespace std;

int main()
{
    int n;

    while(cin >> n)
    {

        double maior_velocidade = -1.0, t = 0.0, d = 0.0;
        double velocidade = 0.0;

        for(int i = 0; i < n; i++)
        {
            cin >> t >> d;
            velocidade = (d / t);


            if(velocidade > maior_velocidade)
            {
                cout << (i + 1) << endl;
                maior_velocidade = velocidade;
            }
        }
    }

    return 0;
}
