#include <iostream>

using namespace std;

int main()
{
    int n, l, i, j, cont;

    while (cin>> n >> l)
    {

        cont = 0;
        for(int k = 0 ; k < n ; k++)
        {

            cin>> i >> j ;

               if(i == l && j == 0){
                  cont++;
               }
        }

           cout<<cont<<endl;
    }

    return 0;
}
