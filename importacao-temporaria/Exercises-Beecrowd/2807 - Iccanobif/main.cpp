#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, atual = 0;
    cin >> n;

    if (n <= 0)
    {
        return 0;
    }

    vector<int> fibonacci(n);

    if (n == 1)
    {
        fibonacci[0] = 1;
    }
    else
    {
        fibonacci[0] = 1;
        fibonacci[1] = 1;
    }

    for(int i = 2 ; i < n; i++)
    {
        atual = (fibonacci[i-1] + fibonacci[i-2]);
        fibonacci[i] = atual;
    }

    for(int j = n-1; j >= 0; j--)
    {
        cout << fibonacci[j];
        if (j > 0)
        {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
