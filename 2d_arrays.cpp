#include <iostream>
using namespace std;

int main(){

    int number_grid[3][2] = {{1,2},{3,4},{5,6}};
    int arbitrary_array[] = {1,2,3};

    /*cout << number_grid[0][1] << endl;
    cout << arbitrary_array[0] << endl;*/

    for(int i=0; i<3; i++) {
        for(int j=0; j<2; j++){
            cout << number_grid[i][j];
        }
        cout << endl;
    }
    return 0;
}