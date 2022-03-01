#include <bits/stdc++.h>
using namespace std;
void Palindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P)
    {
        cout << "It is Palindrome string";
    }
    else
    {
        cout << "It is not a Palindrome string";
    }
}
int main()
{
    cout << "Enter a string : ";
    string S;
    getline(cin, S);
    Palindrome(S);
    return 0;
}