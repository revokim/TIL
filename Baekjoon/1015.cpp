#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<pair<int, int>> A;

    for (int i = 0 ; i < N ; i++){
        int A_num;
        cin >> A_num;
        A.push_back(make_pair(A_num, i));
    }

    sort(A.begin(), A.end());

    vector<int> p(N);

    for (int i = 0 ; i < N ; i++){
        p[A[i].second] = i;
    }

    for (auto a : p) cout << a << ' ';
}