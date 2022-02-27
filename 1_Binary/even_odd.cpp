#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a no. : ";
    cin >> n;
    if (!(n & 1))
        cout << "Even no.";
    else
        cout << "Odd no.";
    return 0;
}