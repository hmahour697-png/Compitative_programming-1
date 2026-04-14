#include<bits/stdc++.h>
using namespace std;
bool check(string stat){
    if(stat == "++X" || stat == "X++"){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    int X = 0;
    while (n--){
        string stat;
        cin>>stat;
        if (check(stat)){
            X++;
        }
        else{
            --X;
        }
    }
    cout<<X<<"\n";
    return 0;
}