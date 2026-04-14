#include<bits/stdc++.h>
using namespace std;

bool isLucky(int x) {
    if (x == 0) return false;
    while (x > 0) {
        int d = x % 10;
        if (d != 4 && d != 7) return false;
        x /= 10;
    }
    return true;
}

int main(){
    string s;
    cin >> s;

    int c = 0;
    for (char ch : s) {
        if (ch == '4' || ch == '7') c++;
    }

    if (isLucky(c)) cout << "YES";
    else cout << "NO";

    return 0;
}
