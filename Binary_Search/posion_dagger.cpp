#include <bits/stdc++.h>
using namespace std;

bool check(long long n, vector<long long> &a, long long h,long long k){
    long long sum = 0;
    for(int i=0; i<n-1 ;i++){
        long long x = a[i]+k-1;
        if(a[i+1]<=x){
            x = a[i+1]-a[i];
        }
        else{
            x = k;
        }
        sum += x;
    }
    sum += k;
    return (sum>=h);
}

void solve(){
    long long n,h;
    cin >> n >> h;
    vector<long long> a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    long long l=1 , r = h, ans = h;
    while(l<=r){
        long long mid = l +(r-l)/2;
       
        if(check(n, a, h, mid)){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}