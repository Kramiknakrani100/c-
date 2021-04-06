#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int key,n,i,j;
    int a[100];
    cout<<"enter the array size"<<endl;
    cin>>n;

    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    std::sort(a,a+n);
    for ( i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        } 
}