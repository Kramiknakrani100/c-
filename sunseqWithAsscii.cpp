#include<bits/stdc++.h>
using namespace std;

void subseqasc(string s,string ans){

    if(s.length()==0){
        cout<<ans<<endl; //base case
        return ;
    }

    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    subseqasc(ros,ans);
    subseqasc(ros,ans+ch);
    subseqasc(ros,ans+to_string(code));

}

int main(){

    subseqasc("AB","");
    return 0;
}