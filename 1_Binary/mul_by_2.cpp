#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, k;
    cout << "Enter a no. : ";
    cin >> n;
    cout << "Enter limit to multiply : ";
    cin >> l;
    k = n;
    while (k < l)
    {
        if(k==n)
        {
            cout << endl << k << "*1 = ";
            cout << k;
        }
        else
        {
            cout << endl << k << "*2 = ";
            cout << k;
        } 
        k = k << 1;
    }
    return 0;
}