#include <iostream>
#include<iomanip>
#include <cmath>

using namespace std;

int main (){
   int num = 0;
    cin>> num;

    cout<< num << "\n";
    cout<< num/100 <<" nota(s) de R$ 100,00"<<"\n";
    num = num % 100;

    cout<< num/50 <<" nota(s) de R$ 50,00"<<"\n";
    num = num % 50;

    cout<< num/20 <<" nota(s) de R$ 20,00"<<"\n";
    num = num % 20;

    cout<< num/10 <<" nota(s) de R$ 10,00"<<"\n";
    num = num % 10;

    cout<< num/5 <<" nota(s) de R$ 5,00"<<"\n";
    num = num % 5;

     cout<< num/2 <<" nota(s) de R$ 2,00"<<"\n";
    num = num % 2;

     cout<< num/1 <<" nota(s) de R$ 1,00"<<"\n";
    num = num % 1;

    return 0;
}
