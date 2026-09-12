#include <iostream>
#include <iomanip>

using namespace std;
int main() {

    int cod, quanty;

    cin>> cod >> quanty;
    cout<< fixed << setprecision(2);

    if( cod == 1 ){
       double preco = 4.00;
        double total = quanty * preco;
         cout<< "Total: R$ " << total << endl;
    }

     if( cod == 2 ){
       double preco = 4.50;
       double total = quanty * preco;
         cout<< "Total: R$ " << total << endl;
    }

     if( cod == 3 ){
       double preco = 5.00;
        double total = quanty * preco;
         cout<< "Total: R$ " << total << endl;
    }

     if( cod == 4 ){
       double preco = 2.00;
       double total = quanty * preco;
         cout<< "Total: R$ " << total << endl;
    }

     if( cod == 5){
       double preco = 1.50;
       double total = quanty * preco;
         cout<< "Total: R$ " << total << endl;
    }

    return 0;
}
