#include<bits/stdc++.h>
using namespace std;

bool check(const vector<string>& t, const string& s) {
    for (int j = 0; j < 5; j++) {
        if (s[0] == t[j][0] || s[1] == t[j][1]) {
            return true;
        }
    }
    return false;
}

int main(){
    string s;
    cin>>s;
    vector<string> t(5);
    for (int i = 0; i < 5; i++) {
        cin >> t[i];
    }
    if (check(t,s)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}