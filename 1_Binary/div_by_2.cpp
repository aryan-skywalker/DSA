#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cout << "Enter a no. : ";
    cin >> n;
    k = n;
    while (k > 0)
    {
        cout << endl << k << "/2 = ";
        k = k >> 1;
        cout << k;
    }
    return 0;
}