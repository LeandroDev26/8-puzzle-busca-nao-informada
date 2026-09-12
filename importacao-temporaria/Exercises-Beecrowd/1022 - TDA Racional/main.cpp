#include <iostream>
#include <iomanip>
#include <cmath>

int mdc(int a , int b){

    while(b != 0){
        int resto = a % b;
        a = b;
       b = resto;
    }
    return a;
}

using namespace std;
int main() {

 int a, b , q , n1, n2, d1 , d2 , numfin , denfin;
 char op , lixo;

 cin>> q;

 for(int i = 0; i < q; i++){

     cin>> n1 >> lixo >> d1 >> op >>  n2 >> lixo >> d2;

   if(op == '+'){
       numfin = (n1 * d2 + n2*d1);
       denfin = (d1*d2);
   }

    if(op == '-'){
     numfin = (n1* d2 - n2*d1);
     denfin = (d1 * d2);
   }

    if(op == '*'){
       numfin = (n1 * n2);
       denfin = (d1*d2);
   }

    if(op == '/'){
       numfin = (n1*d2);
       denfin = (n2*d1);
   }

   a = abs(numfin);
   b = abs(denfin);

   int divisor = mdc(a, b );

   cout << numfin << "/" << denfin << " = " << (numfin / divisor) << "/" << (denfin / divisor) << endl;





 }
    return 0;
}
