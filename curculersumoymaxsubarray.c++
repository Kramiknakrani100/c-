#include <stdio.h>
#include <iostream>
#include <climits>
using namespace std;

int kadane(int a[], int n){

      int cursum = 0;
    int mx = INT8_MIN;

    for (int i = 0; i < n; i++)
    {
        cursum += a[i];
        if (cursum < 0)
        {
            cursum = 0;
        }
        mx = max(mx, cursum);
    }

    return mx;
}

int main()
{
    int n;
    cout << "enter number of size Of Array = ";
    cin >> n;
int mx = INT8_MIN;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int nonwrap;
    int wrap;

    nonwrap = kadane(a, n);

   int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += a[i];
        a[i] = -a[i];
    }

    wrap = totalsum + kadane(a,n);

    mx = max(nonwrap,wrap);

    cout << "Maximum Sum Is = ";
    cout << mx << endl;
    
}