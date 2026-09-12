#include <iostream>

using namespace std;

#include <stdio.h>

int main()
{
    double raio, area;
    const double pi = 3.14159;

    cin>>raio;
    area = pi * raio * raio;

    cout<<"A= "<< area << endl;

    return 0;
}
