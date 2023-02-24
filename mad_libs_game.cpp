#include <iostream>
using namespace std;

int main(){
    string color, plural_noun,celebrity;
    cout << "enter a color: ";
    getline(cin,color);
    cout << "enter a plural_noun: ";
    getline(cin,plural_noun);
    cout << "enter a celebrity: ";
    getline(cin,celebrity);

    cout << "Roses are " << color << endl;
    cout << plural_noun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}