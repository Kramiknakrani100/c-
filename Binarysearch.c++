#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

int Binarysearch(int a[], int n, int key){

    int s=0;
    int e = n;

    while (s<=e)
    {
        int mid = (s+e)/2;
        if(mid == key)
        {
            return mid;
        }
        else if (mid>key)
        {
           return e = mid-1;
        }
        else{
           return s = mid+1;
        }
        
    }
    
    return -1;  
}

int main()
{
    int key,n,i;
    int a[100];
    cout<<"enter the array size"<<endl;
    cin>>n;

    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"enter Any Number"<<endl;
    cin>>key;

    cout<<Binarysearch(a , n, key)<<endl;

}