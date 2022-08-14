#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int i = (start - 1);

    for (int j = start; j <= end - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            int t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    int t = arr[i + 1];
    arr[i + 1] = arr[end];
    arr[end] = t;
    return (i + 1);
}
void quick(int arr[], int start, int end)
{
    if (start < end)
    {
        int p = partition(arr, start, end);
        quick(arr, start, p - 1);
        quick(arr, p + 1, end);
    }
}
void printArr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int n;
    cout << "Enter array size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Before sorting : ";
    printArr(arr, n);
    quick(arr, 0, n - 1);
    cout << "\nAfter sorting : ";
    printArr(arr, n);
    return 0;
}