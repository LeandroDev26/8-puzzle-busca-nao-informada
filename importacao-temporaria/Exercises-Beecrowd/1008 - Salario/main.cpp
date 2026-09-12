#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numfun, worktime;
    float pagament, salary;
    cin>> numfun >> worktime >> pagament;
    cout<< fixed << setprecision(2);
    cout<<"NUMBER = " << numfun << endl;
    salary = pagament * worktime;
    cout<<"SALARY = U$ "<< salary << endl;

}
