#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

  double a , b , c;
  cin>> a >> b >> c;
 double delta = pow(b , 2) - 4 * a * c;


    if(a == 0 || delta < 0){
        cout<< "Impossivel calcular" <<endl;
    }else{

      double R1 = (-b + sqrt(delta)) / (2 * a);
       double R2 = (-b - sqrt(delta)) / (2 * a);

        cout<< fixed << setprecision(5);
        cout<< "R1 = " << R1 << endl;
        cout<< "R2 = " << R2 << endl;
    }



    return 0;
}
