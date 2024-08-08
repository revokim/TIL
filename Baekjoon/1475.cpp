#include <iostream>
#include <algorithm>
#include <cmath> 

using namespace std;

int main(){
    string Nstring;
    cin >> Nstring;

    int N[Nstring.size()];
    int result[10] = {0};

    for (int i = 0 ; i < Nstring.size() ; i++){
        N[i] = Nstring[i] - '0';
    }

    for (int i = 0 ; i < Nstring.size() ; i++){
        switch (N[i]){
            case 1:
                result[1] += 2;
                break;
            case 2:
                result[2] += 2;
                break;
            case 3:
                result[3] += 2;
                break;
            case 4:
                result[4] += 2;
                break;
            case 5:
                result[5] += 2;
                break;
            case 6:
                result[6] += 1;
                break;
            case 7:
                result[7] += 2;
                break;
            case 8:
                result[8] += 2;
                break;
            case 9:
                result[6] += 1;
                break;
            case 0:
                result[9] += 2;
                break;
        }
    }

    cout << ceil(*max_element(result, result + 10)/2.0);
}