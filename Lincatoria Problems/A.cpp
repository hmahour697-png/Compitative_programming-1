#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // Output adjacent swapped pairs: 2 1 4 3 6 5 ...
    for (int i = 1; i <= n; i += 2) {
        cout << i + 1 << " " << i << " ";
    }
    cout << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}