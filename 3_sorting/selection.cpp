#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, small, index;
    cout << "Enter array size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n ; i++)
    {
        small=999;
        for (j = i; j < n; j++)
        {
            if(arr[j] < small)
            {
                small = arr[j];
                index = j;
            }
        }
        for (j = index; j >= i; j--)
                arr[j] = arr[j - 1];
        arr[i] = small;
    }
    cout << "The sorted array is :";
    for (i = 0; i < n; i++)
        cout << " " << arr[i];
    return 0;
}