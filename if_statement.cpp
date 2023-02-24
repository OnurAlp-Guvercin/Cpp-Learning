#include <iostream>
using namespace std;

int getMax(int num1, int num2){

    int result;
    if(num1 >= num2){
        result=num1;
    }
    else{
        result = num2;
    }

    return result;
}



int main() 
{
    bool isMale = true ;
    bool isTall = false;

    cout << "Bigger intiger is: " << getMax(55555,1) << endl;

    if(isMale && isTall){
        cout << "You are a male" << endl;
    }
    else if(isMale == true || !isTall){
        cout << "You are not a male" << endl;
    }
    else{
        cout << "else statementa girdi" << endl;
    }

    return 0;
}