#include <iostream>
#include <iomanip>

using namespace std;

int main() {
 int x;
 double y;
 double consumoM;
 cin>> x;
 cin >> y;
 cout << fixed << setprecision(3);

 consumoM = x/y;

 cout<< consumoM <<" km/l" <<"\n";


    return 0;
}
