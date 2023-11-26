#include <iostream>
using namespace std;
int main()
{
    cout << "Nitesh Kumar" << endl;
    cout << "2822106" << endl;
    int n, test = 0;
    cout << "Enter The Number : ";
    cin >> n;
    if (n == 0 || n == 1)
    {
        test = 1;
    }
    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            test = 1;
            break;
        }
    }
    if (test == 0)
    {
        cout << n << " is a Prime Number.";
    }
    else
    {
        cout << n << " is not a Prime Number";
    }
}