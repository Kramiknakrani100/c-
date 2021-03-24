#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

void DecimaltoBinary(int n)
{
    int ans,i;
    int a[1000];
    i = 0;
     while ( n > 0)
     {
        a[i] = n%2;
        n = n/2;
        i++;
     }

     for (  i = i-1; i >= 0; i--)
     {
         cout<< a[i];
     }
}

int main()
{

    int n;
    cin>>n;

    DecimaltoBinary(n);
    
    // int ans,i;
    // int a[1000];
    // i = 0;
    //  while ( n > 0)
    //  {
    //     a[i] = n%2;
    //     n = n/2;
    //     i++;
    //  }

    //  for (  i = i-1; i >= 0; i--)
    //  {
    //     cout<< a[i];
    //  }

    return 0;

}