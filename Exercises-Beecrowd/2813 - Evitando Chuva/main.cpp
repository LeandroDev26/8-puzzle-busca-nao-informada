#include <iostream>

using namespace std;

int main()
{

    int n, comprados_casa = 0, comprados_escritorio = 0, sobrando_casa = 0, sobrando_escritorio = 0;
    string ida, volta;
    cin>> n;

    for(int i = 0 ; i < n ; i++)
    {
        cin>> ida >> volta;
        if(ida == "chuva")
        {
            if(sobrando_casa > 0)
            {
                sobrando_casa--;
            }
            else
            {
                comprados_casa++;
            }
            sobrando_escritorio++;
        }

        if(volta == "chuva")
        {
            if(sobrando_escritorio > 0)
            {
                sobrando_escritorio--;
            }
            else
            {
                comprados_escritorio++;
            }
            sobrando_casa++;
        }

    }

    cout<< comprados_casa<<" "<<comprados_escritorio<<endl;




    return 0;
}
