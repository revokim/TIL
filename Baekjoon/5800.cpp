#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int K, min_score, max_score, gap;
    cin >> K;

    for (int i = 0; i < K; i++){
        min_score = 100;
        max_score = 0;
        gap = 0;
        int N;
        cin >> N;
        vector<int> score(N);
        for (int j = 0; j < N; j++){
            cin >> score[j];
            max_score = (score[j] > max_score) ? score[j] : max_score;
            min_score = (score[j] < min_score) ? score[j] : min_score;
        }
        sort(score.begin(), score.end());
        for (int j = 1; j < N; j++){
            gap = max(gap, score[j] - score[j-1]);
        }
        cout << "Class " << i+1 << "\n";
        cout << "Max " << max_score << ", Min " << min_score << ", Largest gap " << gap << "\n";
    }
}