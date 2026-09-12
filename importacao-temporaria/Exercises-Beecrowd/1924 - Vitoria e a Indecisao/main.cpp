#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n ;
    string nomedcurso;
    cin>> n;
    cin.ignore();

    for( int i = 0 ; i < n ; i++)
    {
        getline(cin, nomedcurso);
    }


    cout<<"Ciencia da Computacao"<<endl;


    return 0;
}
