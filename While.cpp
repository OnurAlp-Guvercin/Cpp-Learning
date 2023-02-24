#include <iostream>
using namespace std;

int main()
{
    int index = 1;

    while(index <= 10){
        cout << index << endl;
        index++;
    }

    index = 1;

    do{
        cout << index << endl;
        index++;
    }while(index <= 10); // first enter the loop, then see if it is in while loop

    return 0;
}