#include <iostream>
using namespace std;

int unique(int a[], int n)
{
    int xorum = 0;
    for (int i = 0; i < n; i++)
    {
        xorum = xorum ^ a[i];
    }
    return xorum;
}

int main()
{

    int a[7] = {1, 2, 3, 9, 1, 2, 3};
    cout << unique(a, 7) << endl;
    return 0;
}