#include <iostream>
#include <string>
using namespace std;

int main()
{

    string dodo, leo, pep;
    while(cin>> dodo >> leo >> pep)
    {
        if(dodo == "pedra" && leo == "tesoura" && pep == "tesoura")
        {
            cout<<"Os atributos dos monstros vao ser inteligencia, sabedoria..."<<endl;
        }
        else if(dodo == "tesoura" && leo == "pedra" && pep == "tesoura")
        {
            cout<<"Iron Maiden's gonna get you, no matter how far!"<<endl;
        }
        else if(dodo == "tesoura" && leo == "tesoura" && pep == "pedra")
        {
            cout<<"Urano perdeu algo muito precioso..."<<endl;
        }
        // pedra
        else if(dodo == "tesoura" && leo == "papel" && pep == "papel")
        {
            cout<<"Os atributos dos monstros vao ser inteligencia, sabedoria..."<<endl;
        }
        else if(dodo == "papel" && leo == "tesoura" && pep == "papel")
        {
            cout<<"Iron Maiden's gonna get you, no matter how far!"<<endl;
        }
        else if(dodo == "papel" && leo == "papel" && pep == "tesoura")
        {
            cout<<"Urano perdeu algo muito precioso..."<<endl;
        }
        //tesoura
        else if(dodo == "papel" && leo == "pedra" && pep == "pedra")
        {
            cout<<"Os atributos dos monstros vao ser inteligencia, sabedoria..."<<endl;
        }
        else if(dodo == "pedra" && leo == "papel" && pep == "pedra")
        {
            cout<<"Iron Maiden's gonna get you, no matter how far!"<<endl;
        }
        else if(dodo == "pedra" && leo == "pedra" && pep == "papel")
        {
            cout<<"Urano perdeu algo muito precioso..."<<endl;
        }
        else
        {
            cout<<"Putz vei, o Leo ta demorando muito pra jogar..."<<endl;
        }


    }



    return 0;
}
