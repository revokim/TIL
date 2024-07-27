#include <iostream>
#include <string>

using namespace std;

int main(){
    string text;
    cin >> text;

    int cnt = 0;

    for (char c : text){
        if (c == '.'){
            if (cnt == 2){
                cout << "BB.";
                cnt = 0;
            }
            else if (cnt == 0){
                cout << ".";
            }
            else if (cnt == 4){
                cout << "AAAA.";
                cnt = 0;
            }
            else{
                cout << "-1";
                return 0;
            }
        }
        else cnt++;
        
        if (cnt == 4){
            cout << "AAAA";
            cnt = 0;
        }
    }
    
    if (cnt == 2) cout << "BB";
    else if (cnt == 4) cout << "AAAA";
    else cout << "-1";
}