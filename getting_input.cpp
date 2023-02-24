#include <iostream>
using namespace std;

int main(){
/*
    double age;
    cout << "Enter your age: ";
    cin >> age; //if you wanna input char or intiger
    cout << "You are " << age << " years old." << endl;
 */   

    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello " << name; //if you wanna input string

    return 0;
}