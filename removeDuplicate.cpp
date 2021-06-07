#include<bits/stdc++.h>
using namespace std;

string rDup(string s){

    if(s.length()==0){ //base case
        return "";
    }

    char ch = s[0];
    string ans = rDup(s.substr(1));

    if(ch==ans[0]){
        return ans;
    }
    return ch+ans;
}

int main(){

    cout<<rDup("aaabbcccdd")<<endl;
    return 0;
}