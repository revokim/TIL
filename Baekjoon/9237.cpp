#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, ti;
    cin >> N;
    
    vector<int> t;

    for (int i = 0 ; i < N ; i++){
        cin >> ti;
        t.push_back(ti); 
    }

    sort(t.rbegin(), t.rend());
    
    int result = 0;

    for (int i = 0 ; i < t.size() ; i++){
        result = (result > t[i] + 2 + i) ? result : t[i] + 2 + i; 
    }

    cout << result;
}