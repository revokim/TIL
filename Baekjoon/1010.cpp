#include <iostream>

using namespace std;

long long combination(int n, int r) {
    if (r > n - r) r = n - r;
    long long result = 1;
    for (int i = 1; i <= r; ++i) {
        result *= n - r + i;
        result /= i;
    }
    return result;
}

int main() {
    int n, r, k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> r >> n;
        cout << combination(n, r) << "\n";
    }
    return 0;
}