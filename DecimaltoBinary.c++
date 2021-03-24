#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

// int DecimaltoBinary(int n)
// {
//     int ans,i;
//     int a[1000];
//      while ( n > 0)
//      {
//         i = 0;
//         a[i] = n%2;
//         i++;
//         n = n/2;
//      }

//      for (  i = i-1; i >= 0; i--)
//      {
//       ans = a[i];
//      }
//      return ans;
     
// }

int main()
{

    int n;
    cin>>n;

    //cout<< DecimaltoBinary(n) << endl;
    
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