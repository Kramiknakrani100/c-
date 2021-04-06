#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int k,n;
    cout<<"enter the array size"<<endl;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"enter k = ";
    cin>>k;
    
    sort(a,a+n);

    int mn,mx;
    mn = a[k-1];
    mx = a[n-k];
    cout<<k;
    cout<<" smallest element is = ";
    cout<<mn<<endl;
    cout<<k;
    cout<<" Largest element is = ";
    cout<<mx<<endl;
 
   
}