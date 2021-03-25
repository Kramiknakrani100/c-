#include<stdio.h>
#include<conio.h>
#include<iostream>
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

    // declare 2 varrible 
//first  i          n-1
      // 2   5   8   6   8
//second     j           n
    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (a[j]<a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
            
        }  
    }
    for ( i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        } 
}