#include <iostream>
using namespace std;

int main(){

    string phrase = "Griffe Academy";
    cout << "lengt of phrase is: " << phrase.length() << endl;
    phrase[0] = 'B';
    cout << "changed first character is: " << phrase[0] << endl;

    string phrase_2 = "Griffe Academy";
    cout << phrase.find("Academy",0) << endl;;

    string phrase_3 = phrase_2.substr(7,3);    
    cout << phrase_3 << endl;

    return 0;
}