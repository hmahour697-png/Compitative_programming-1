#include<bits/stdc++.h>
using namespace std;

bool check(const string& s) {
    int c = 0;
    for (int j = 0; j < s.size(); j++) {
        if (s[j] == '4' || s[j] == '7'){
            c++;
        }
    }
    if(c==4 || c==7) return true;
    return false;
}

int main(){
    string s;
    cin>>s;
    if(check(s)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}