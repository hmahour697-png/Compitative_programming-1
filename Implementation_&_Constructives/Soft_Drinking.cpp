#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>> np;
    int m1 = (k*l)/nl;
    int m2 = c*d;
    int m3 = p/np;
    int ans = min({m1,m2,m3})/n;
    cout<<ans<<"\n";
    return 0;
}