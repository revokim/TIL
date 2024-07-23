#include <iostream>
using namespace std;

int main(){
    int n, sum = 0, ans = 0, l = 1, r = 1;
    cin >> n;
    while (l <= r && r <= n){
        if (sum < n) sum += r++;
        else {
            if (sum == n) ans++;
            sum -= l++;
        }
    }
    cout << ans + 1;
    return 0;
}