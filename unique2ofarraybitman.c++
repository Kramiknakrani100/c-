#include <iostream>
using namespace std;

int setBit(int n, int position)
{
    return ((n & (1 << position)) != 0);
}

void unique(int a[], int n)
{
    int xorum = 0;
    for (int i = 0; i < n; i++)
    {
        xorum = xorum ^ a[i];
    }
    int tempxrm = xorum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = xorum & 1;
        pos++;
        xorum = xorum >> 1;
    }
    int newxr = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(a[i], pos - 1))
        {
            newxr = newxr ^ a[i];
        }
    }
    cout << newxr << endl;
    cout <<(tempxrm^newxr )<< endl;
}

int main()
{

    int a[] = {1, 2, 3, 6, 5, 1, 2, 3};
    unique(a, 8);
    return 0;
}