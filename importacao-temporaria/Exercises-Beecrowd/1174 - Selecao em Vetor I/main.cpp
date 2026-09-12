#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{

    vector <double> a;
    double v ;
    cout<< fixed << setprecision(1);

    for (int i = 0; i < 100; i++){
         cin>> v;
         a.push_back(v);
    }

    for(int k = 0; k < a.size(); k++){

           if( a[k] <= 10){
             cout<<"A["<< k << "]"<< " = " << a[k] <<endl;
           }
    }









    return 0;
}
