#include <iostream>
#include <string>

using namespace std;

int main()
{

    int v, quociente = 0, resto = 0;
    string num;
    /*10 = A
    / A mágica acontece nesta única linha:
    cout << uppercase << hex << v << endl;  11 = B
    12 = C
    13 = D
    14 = E
    15 = F
     */
    cin>> v;


    while(v > 0)
    {

        quociente = v / 16;
        resto = v % 16;
        if( resto >= 10 && resto <= 15)
        {

            if( resto == 10)
            {
                num = "A" + num ;
            }
            else if( resto == 11)
            {
                num = "B" + num ;
            }
            else if( resto == 12  )
            {
                num = "C" + num ;
            }
            else if( resto == 13 )
            {
                num = "D" + num ;
            }
            else if( resto == 14 )
            {
                num = "E" + num ;
            }
            else if( resto == 15 )
            {
                num = "F" + num ;
            }
        }
        else
        {
            num =  to_string(resto) + num;
        }

        v = quociente;



    }

    cout << num << endl;




    return 0;
}
