#include <iostream>
using namespace std;


int main(){


    int age = 19;
    int *pAge = &age; // stores memory adress of age variable, & shows memory adress of age and with * you create pointer.

    double gpa= 2.7;
    double *pGpa = &gpa;

    string name=  "Mike";
    string *pName = &name;

    cout << "adress of age: " << &age << endl;
    cout << "stored value in pointer: " << pAge << endl;
    cout << "pointer's memory adress: " << &pAge << endl;
    cout << "pointers points to: " << *pAge << endl;
    cout << "pointers points to: " << *&age << endl;
    cout << "you can access the actual values adress via pointer: " << *&pAge << endl;

    return 0;
}