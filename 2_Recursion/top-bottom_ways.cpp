#include <bits/stdc++.h>
using namespace std;
int count(int m, int n)
{
    if (n == 1 || m == 1)
        return 1;
    return count(n-1,m) + count(n,m-1);
}
int main()
{
    int m, n;
    cout << "Enter matrix dimension : ";
    cin >> m;
    cin >> n;
    int ways = count(m, n);
    cout <<"The no. of ways " << m << "*" << n << " matrix can be reached is = " << ways;
    return 0;
}