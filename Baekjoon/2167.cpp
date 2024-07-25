#include <iostream>

using namespace std;

int main(){
    int N, M, K, i, j, x, y, result;
    
    cin >> N >> M;

    int arr[N][M];

    for (int a = 0 ; a < N ; a++){
        for (int b = 0 ; b < M ; b++){
            cin >> arr[a][b];
        }
    }

    cin >> K;

    for (int a = 0 ; a < K ; a++){
        result = 0;
        cin >> i >> j >> x >> y;
        for (int b = i-1 ; b < x ; b++){
            for (int c = j-1 ; c < y ; c++){
                result += arr[b][c];
            }
        }
        cout << result << "\n";
    }
}