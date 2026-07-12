#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

int size;
if (!(cin >> size)) return 0;

vector<int> balls(size);
for (int i = 0; i < size; i++) {
    cin >> balls[i];
}

int big = 1e9;
vector<vector<int>> memo(size + 2, vector<int>(size + 2, 0));

for (int left = 0; left < size; left++) {
    for (int right = left; right < size; right++) {
        memo[left][right] = big;
    }
}

for (int i = 0; i < size; i++) {
    memo[i][i] = 1;
}

for (int length = 2; length <= size; length++) {
    for (int start = 0; start <= size - length; start++) {
        int end = start + length - 1;

        memo[start][end] = 1 + memo[start + 1][end];

        for (int mid = start + 1; mid <= end; mid++) {
            if (balls[start] == balls[mid]) {
                memo[start][end] = min(memo[start][end],
                                       memo[start + 1][mid - 1] + memo[mid + 1][end]);
            }
        }
    }
}

cout << memo[0][size - 1] << '\n';
return 0;

}
