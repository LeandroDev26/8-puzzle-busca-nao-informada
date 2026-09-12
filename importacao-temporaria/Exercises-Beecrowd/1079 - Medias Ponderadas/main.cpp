#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int n ;
    double a, b, c, media;
    cin>> n;
    vector<double> results;

    cout<< fixed << setprecision(1);

    for( int i = 0; i < n; i++)
    {

        cin>> a >> b >> c;
        media = ((a*2)+(b*3)+(c*5)) / (2+3+5); // or 10
        results.push_back(media);

    }

    for (int i = 0; i < results.size(); i++)
    {
        cout<< results[i]<<endl;
    }



    return 0;
}
