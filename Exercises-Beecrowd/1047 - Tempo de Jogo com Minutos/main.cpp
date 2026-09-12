#include <iostream>

using namespace std;

int main()
{
    int hi, hf, mi, mf, tm, hr, inicio_min, fim_min;

    cin>> hi >> mi >> hf >> mf;

    inicio_min = (hi * 60) + mi;
    fim_min= (hf * 60) + mf;

    tm = (fim_min - inicio_min);

    if(tm <= 0)
    {

        tm += 1440;
    }

    hr  = (tm / 60);
    tm = (tm % 60);

    cout<< "O JOGO DUROU "<< hr << " HORA(S) E " << tm <<" MINUTO(S)"<< endl;

    return 0;
}
