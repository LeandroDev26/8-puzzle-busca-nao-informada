#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b,c;
    cin>> a >> b >> c;

    if (a == "vertebrado")
    {
        if (b == "ave")
        {
            if (c == "carnivoro") cout << "aguia" << endl;
            else cout << "pomba" << endl;
        }
        else     // mamifero
        {
            if (c == "onivoro") cout << "homem" << endl;
            else cout << "vaca" << endl;
        }
    }
    else     // invertebrado
    {
        if (b == "inseto")
        {
            if (c == "hematofago") cout << "pulga" << endl;
            else cout << "lagarta" << endl;
        }
        else     // anelideo
        {
            if (c == "hematofago") cout << "sanguessuga" << endl;
            else cout << "minhoca" << endl;
        }
    }

    return 0;
}
