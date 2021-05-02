#include"bits/stdc++.h"

using namespace std;

void lowertoupper(string str)
{
     for (int i = 0; i < str.size(); i++)
    {
        if(str[i]>= 'a' && str[i]<='z'){
            str[i] = str[i] - 32;
        }
        
    }
}

int main(){

    string str;
    cout<<"enter your String = ";
    getline(cin,str);

    cout<<lowertoupper(str);

    cout<<str;

    return 0;
}
