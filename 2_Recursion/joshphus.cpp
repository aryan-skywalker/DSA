#include <bits/stdc++.h>
using namespace std;
int jos(int n, int k)
{
    if (n == 1)
        return 0;
    return (jos(n-1, k) + k) % n;
}
int main()
{
    int n, k, x;
    cout << "Enter number : ";
    cin >> n;
    cout << "Enter gap : ";
    cin >> k;
    x = jos(n, k);
    cout << "The Person who won is " << x;
    return 0;
}