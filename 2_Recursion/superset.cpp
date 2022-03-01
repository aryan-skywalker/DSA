#include <bits/stdc++.h>
using namespace std;
void Superset(string S, int i, string c)
{
    int n=S.length();
    if (i == n)
    {
        cout << c << "\n";
        return;
    }
    Superset(S, i+1, c + S[i]);
    Superset(S, i+1, c);
    
}
int main()
{
    cout << "Enter a string : ";
    string S;
    getline(cin, S);
    Superset(S, 0, "");
    return 0;
}