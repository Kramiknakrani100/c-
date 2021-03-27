#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n,i;
    int a[n];
    int mx=INT_MIN;
    cout<<"enter number of element"<<endl;
   cin>>n;
   for ( i = 0; i < n; i++)
   {
       cin>>a[i];
   }
   
   for ( i = 0; i < n; i++)
   {
       mx = max(a[i],mx);
   }
   cout<<"Maximum Element Is = "<<endl;
     cout<<mx;

}