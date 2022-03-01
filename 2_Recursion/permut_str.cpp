#include <bits/stdc++.h>
using namespace std;
void Permutation(string S, int l, int r)
{
    if (l == r)
    {
        cout << S << "\n";
        return;
    }
    for(int i=l; i<=r; i++)
    {
        swap(S[l], S[i]);
        Permutation(S, l+1, r);
        swap(S[l], S[i]);
    }
}
int main()
{
    cout << "Enter a string : ";
    string S;
    getline(cin, S);
    Permutation(S, 0, S.length()-1);
    return 0;
}