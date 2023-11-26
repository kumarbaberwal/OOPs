#include <iostream>
#include <string.h>
using namespace std;
void reversit(char str[], int n)
{
    for (int i = 0; i < n; i++, n--)
    {
        swap(str[i], str[n]);
    }
}
int main()
{
    cout << "Nitesh Kumar" << endl;
    cout << "2822106" << endl;
    char str[50];
    int len;
    cout << "Enter a string : ";
    gets(str);
    len = strlen(str) - 1;
    reversit(str, len);
    cout << "Reverse string : " << str;
    return 0;
}
