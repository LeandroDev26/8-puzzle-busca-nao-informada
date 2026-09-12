#include <iostream>

using namespace std;

int main (){
  int H;
  int M;
  int S;
    int n;

    cin>> n;
   H = n/3600;
   n = n % 3600;

   M = n/60;
   n = n % 60;

   S = n;
   cout<< H <<":"<< M <<":"<< S <<"\n";


    return 0;
}
