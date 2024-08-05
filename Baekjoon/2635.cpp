#include <iostream>
#include <vector>

using namespace std;

vector<int> func(int a, int b){
    vector<int> num;
    num.push_back(a);
    while(b >= 0){
        num.push_back(b);
        int tmp = a;
        a = b;
        b = tmp - a;
    }
    return num;
}

int main(){
    int firstNum;
    vector<int> Num;
    int MaxNumSize = 0;
    vector<int> MaxNum;

    cin >> firstNum;

    for(int i = 1 ; i <= firstNum; i++){
        Num = func(firstNum, i);
        if(MaxNumSize < Num.size()) {
            MaxNumSize = Num.size();
            MaxNum = Num;
        }
    }

    cout << MaxNumSize << "\n";
    for (int i = 0 ; i < MaxNumSize ; i++){
        cout << MaxNum[i] << " ";
    }
}