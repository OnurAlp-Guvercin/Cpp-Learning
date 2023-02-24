#include <iostream>
using namespace std;

int main(){
    int luckyNums[20] = {4, 8, 21, 42};
    cout << luckyNums << endl;

    luckyNums[10] = 999;
    cout << luckyNums[10];

    int luckyNums_2[20];//how many elements you wanna store
    luckyNums_2[0] = 13;
    cout << luckyNums_2 << endl;
    cout << luckyNums_2[0] << endl;


    return 0;
}