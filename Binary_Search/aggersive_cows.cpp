#include <bits/stdc++.h>
using namespace std;

bool checkp(int n , int c, vector<int> &v, int mid){
    int cows = 1;
    int lat_Cow_pos = v[0];
    for(int i=1; i<n;i++){
        if(v[i] - lat_Cow_pos >= mid){
            cows++;
            lat_Cow_pos = v[i];
        }
    }
    if(cows <c)return false;
    return true;
}

void solve(){
    int n,c;
    cin>>n>>c;
    vector<int> v(n);
    for(int i=0 ; i<n ; i++)cin>>v[i];
    sort(v.begin(),v.end());
    int l = 1 , r = v[n-1]-v[0], ans = 0;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(checkp(n,c,v,mid)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}