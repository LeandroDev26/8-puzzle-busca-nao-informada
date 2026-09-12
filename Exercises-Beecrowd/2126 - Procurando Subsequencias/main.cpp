#include <iostream>
#include <string>

using namespace std;

int main()
{

    int caso = 1, quantidade , posicao ;
    string n1, n2 ;

    while( cin>> n1 >> n2 )
    {
        cout<<"Caso #"<<caso<<":"<<endl;

        quantidade = 0;
        posicao = 0;
        size_t ponto_de_partida = 0;


        while (true)
        {
            size_t indice = n2.find(n1, ponto_de_partida);

            if (indice == string::npos)
            {
                break;
            }


            quantidade++;
            posicao = indice + 1;


            ponto_de_partida = indice + 1;
        }

        if (quantidade == 0)
        {
            cout << "Nao existe subsequencia" << endl;
        }
        else
        {
            cout << "Qtd.Subsequencias: " << quantidade << endl;
            cout << "Pos: " << posicao << endl;
        }

        cout << endl;



        caso++;
    }




    return 0;
}
