#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  int a , b , c , d;

  cin>> a >> b >> c >> d;


  int somacd = c + d;
  int somaab = a + b;

  if(b > c && d > a && somacd > somaab && c > 0 && d > 0 && a % 2 == 0 ){

      cout<< "Valores aceitos"<< endl;
  }else{
      cout<< "Valores nao aceitos"<< endl;;
  }


return 0;
}
