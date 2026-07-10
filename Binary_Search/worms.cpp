#include <bits/stdc++.h>
using namespace std;

int custom_lower_bound(const int arr[], int size, int target) {
    int low = 0;
    int high = size; // Set high to size to handle out-of-bounds cases

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= target) {
            high = mid; // Look for a smaller index on the left
        } else {
            low = mid + 1; // Look on the right side
        }
    }
    return low; // Points to the first element >= target, or size
}

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int m;
    cin>>m;

    for(int i=1 ; i<n ; i++){
        v[i] += v[i-1];
    }
    
    while(m--){
        int x;
        cin>>x;
        auto lb = lower_bound(v.begin(), v.end(), x);
        if (lb == v.end()) {
            cout << -1 << "\n";
            
        } 
        else {
            int r = (lb - v.begin()) + 1;
            cout << r << "\n";
        }
}}

int main() {
    solve();
    return 0;
}