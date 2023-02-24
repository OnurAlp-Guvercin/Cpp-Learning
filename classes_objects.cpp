#include <iostream>
using namespace std;

class Book {
    public: 
        string title;
        string author;
        int page;
    
};

int main(){

    Book book1;
    book1.title = "Harry Poter";
    book1.author = "JK Rowling";
    book1.page = 500;

    Book book2;
    book2.title = "Nutuk";
    book2.author = "Ataturk";
    book2.page = 600;

    cout << book1.title << endl;
    cout << book2.title << endl;

    return 0;
}