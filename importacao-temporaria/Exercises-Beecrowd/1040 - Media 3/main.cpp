#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double n1, n2, n3, n4, media, recuperacao;
    cin>> n1 >> n2 >> n3 >> n4;

    media = ((n1*2) + (n2*3) + (n3*4) + (n4*1))/10;
    cout<< fixed << setprecision(1);

    if ( media >= 7.0)
    {
        cout<< "Media: "<< media << endl;
        cout<< "Aluno aprovado."<< endl;
    }

    if (media < 5.0)
    {
        cout<< "Media: "<< media << endl;
        cout<< "Aluno reprovado."<<endl;
    }

    if ( media >= 5.0 && media <= 6.9 )
    {
        cout<< "Media: "<< media << endl;
        cout<< "Aluno em exame."<< endl;
        cin>> recuperacao;
        cout<< "Nota do exame: " << recuperacao <<endl;

        media = (media + recuperacao) / 2;

        if(media >= 5.0)
        {
            cout<< "Aluno aprovado."<<endl;
            cout<< "Media final: "<< media << endl;
        }
        if (media < 5.0)
        {
            cout << "Aluno reprovado." <<endl;
            cout<<"Media final: " << media << endl;

        }
    }


    return 0;
}
