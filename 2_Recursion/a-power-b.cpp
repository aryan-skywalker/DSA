#include <bits/stdc++.h>
using namespace std;
int power(int a, int b)
{
    if (b == 1)
        return a;
    return a * power(a, b-1);
}
int main()
{
    int a, b;
    cout << "Enter number : ";
    cin >> a;
    cout << "Enter power : ";
    cin >> b;
    int p = power(a ,b);
    cout << a <<"^" << b <<"=" << p;
    return 0;
}