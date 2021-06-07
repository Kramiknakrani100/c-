#include <bits/stdc++.h>
using namespace std;

void Large(int arr[], int n)
{
    int i;
    int mx = 0;
    int ans;
    for (i = 0; i < n; i++)
    {

        if (arr[i] > arr[mx])
        {
            // mx = arr[i];
            // ans = mx;
            mx = i;
        }
    }
    cout<<mx;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == ans)
    //     {
    //         cout<<i;
    //     }
        
    // }
    
}

int main()
{
    int arr[5] = {10, 7, 89, 8, 98};
    Large(arr, 5);
}