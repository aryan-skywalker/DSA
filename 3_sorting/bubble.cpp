#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, temp;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array : ";
    for(i=0 ; i<n ; i++)
        cin>>arr[i];
    for( i=0 ; i<n-1 ; i++)
    {
        for( j=0 ; j<n-i-1 ; j++)
        {
            if( arr[j] > arr [j+1] )
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"The sorted array is : ";
    for (i = 0; i < n; i++)
        cout << " " << arr[i];
    return 0;
}