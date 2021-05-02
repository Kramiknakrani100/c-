#include"bits/stdc++.h"

using namespace std;

int main()
{
    string s = "kkkssieuehkss";

    int f[26];
    for (int i = 0; i < 26; i++)
    {
        f[i] = 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        f[s[i]-'a']++;
    }
    
    int maxf = 0;
    char maxch = 'a';

    for (int i = 0; i < 26; i++)
    {
        if(f[i] > maxf)
        {
            maxf = f[i];
            maxch = i+'a';
        }
    }
    cout<<maxf<<" "<<maxch<<endl;

}