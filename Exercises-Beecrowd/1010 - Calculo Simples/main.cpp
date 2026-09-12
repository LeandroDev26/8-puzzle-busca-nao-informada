#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int codp1, totp1 ,  codp2, totp2;
  double preco1 , preco2 , valor;

   cin>> codp1 >> totp1 >> preco1 >> codp2 >> totp2 >> preco2;

           valor = totp1 * preco1 + totp2 * preco2;
            cout<< fixed << setprecision(2);
             cout<<"VALOR A PAGAR: R$ " << valor;
    return 0;
}
