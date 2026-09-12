#include <iostream>

using namespace std;

int main()
{

    int x, y, cont = 0;
    cin>> x >> y;
    for(int i = 1; i <= y; i++)
    {
        cont++;
        if(cont == x)
        {
            cout << i << endl;
            cont = 0;

        }
        else
        {
            cout<< i << " ";
        }
    }


    return 0;
}
