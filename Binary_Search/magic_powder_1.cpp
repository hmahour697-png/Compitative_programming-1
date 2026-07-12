#include <bits/stdc++.h>
using namespace std;

bool check(int mid, vector<int> &a, vector<int> &b, int c,int n){
    for(int i=0; i<n ;i++){
        int req = a[i]*mid;
        req -= b[i];
        if(req>0){
            if(c>=req){
                c -= req;
            }    
            else{
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n, c;
    cin >> n >> c;
    vector<int> a(n),b(n);
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    int l=0 , r = 200, ans = 0;
    while(l<=r){
        int mid = l +(r-l)/2;
       
        if(check(mid, a, b, c, n)){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}