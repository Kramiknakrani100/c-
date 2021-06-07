#include <bits/stdc++.h>
using namespace std;

int insert(int arr[], int cap, int n, int pos, int x)
{

    if (n == cap)
    {
        return n;
    }
    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;
    return n + 1;
}

int main()
{
    int cap = 5;
    int arr[cap] = {5, 7, 8};
    int n = 3;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "---------------------------" << endl;

    n = insert(arr, cap, n, 3, 3);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}