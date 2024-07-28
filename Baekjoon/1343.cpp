#include <iostream>
#include <string>

using namespace std;

int main(){
    string text;
    string result;
    cin >> text;

    int cnt = 0;

    for (char c : text){
        if (c == '.'){
            if (cnt == 2){
                result += "BB.";
                cnt = 0;
            }
            else if (cnt == 0){
                result += ".";
            }
            else if (cnt == 4){
                result += "AAAA.";
                cnt = 0;
            }
            else{
                cout << "-1";
                return 0;
            }
        }
        else cnt++;
        
        if (cnt == 4){
            result += "AAAA";
            cnt = 0;
        }
    }
    
    if (cnt == 2) result += "BB";
    else if (cnt == 4) result += "AAAA";
    else if (cnt != 0) {
        cout << "-1";
        return 0;
    };
    
    cout << result;
}