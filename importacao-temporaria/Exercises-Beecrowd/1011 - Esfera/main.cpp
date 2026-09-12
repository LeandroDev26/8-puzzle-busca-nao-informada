#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.14159

using namespace std;

int main()
{
     double raio , volume ;
     cin>> raio;
     volume = 4/3.0 * PI * pow(raio,3);
     cout<< fixed << setprecision(3);
      cout<< "VOLUME = " << volume << endl;
    return 0;
}
