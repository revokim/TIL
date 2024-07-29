#include <iostream>
#include <vector>
#include <string> 
#include <utility>

using namespace std;

int main(){
    int group = 0;
    int headcount;
   
    while(1){
        cin >> headcount;
        if (headcount == 0) return 0;
        vector<vector<string>> name_with_message(headcount, vector<string>(headcount));
        vector<pair<int, int>> forger;

        for (int i = 0 ; i < headcount ; i++){
            for (int j = 0 ; j < headcount ; j++){
                cin >> name_with_message[i][j];
                if (name_with_message[i][j] == "N"){
                    int k = i - j;
                    if (i - j < 0) k = headcount - j + i;
                    forger.push_back(make_pair(i, k));
                }
            }
        }
        cout << "Group " << group+1 << "\n";
        if(forger.empty()){
            cout << "Nobody was nasty \n";
        }
        else {
            for (const auto& forg : forger){
                cout << name_with_message[forg.second][0] << " was nasty about " << name_with_message[forg.first][0] << "\n";
            }
        }
        cout << "\n";

        forger.clear();

        group++;
    }
}