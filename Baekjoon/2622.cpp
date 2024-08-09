#include <iostream>

using namespace std;

int main(){
    int n;
    int cnt = 0;
    cin >> n;

    for (int i = 0 ; i < n ; i++){
        for (int j = i ; j < n ; j++){
            int k = n - (i + j);
            if (k < j) break;
            if (i + j > k) cnt++;
        }
    }

    cout << cnt;
}