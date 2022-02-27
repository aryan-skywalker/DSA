#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two no. : ";
    cin >> a;
    cin >> b;
    cout << "a=" << a << " and b=" << b;
    a = a^b;
    b = a^b;
    a = a^b;
    cout << "\na=" << a << " and b=" << b ;
    return 0;
}