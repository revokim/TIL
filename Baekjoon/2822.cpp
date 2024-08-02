#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    return a.first > b.first;
}

int main(){
    int highest[5]={};
    int sum = 0;
    int d[5];
    vector<pair<int, int>> vec;
    for (int i = 0 ; i < 8 ; i++){
        int point;
        cin >> point;
        vec.push_back({point, i});
    }
    sort(vec.begin(), vec.end(), compare);

    for (int i = 0 ; i < 5 ; i++){
        sum += vec[i].first;
        d[i] = vec[i].second;
    }
    cout << sum << "\n";
    sort(d,d+5);

    for(int i = 0 ; i < 5 ; i++){
        cout << d[i]+1 << " ";
    }
}
