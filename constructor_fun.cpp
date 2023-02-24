#include <iostream>
using namespace std;

class Book {
    public: 
        string title;
        string author;
        int page; 

        Book(){
            title = "no title";
            author = "no author";
            page = 0;
        }

        Book(string aName, string aAuthor, int aPage){
            title = aName;
            author = aAuthor;
            page = aPage;
        }

};



int main(){

    Book book1("Harry Poter", "Harry Poter", 500);
    Book book2("Nutuk", "Ataturk", 600);
    Book book3;


    cout << book1.title << endl;
    cout << book2.title << endl;
    cout << book3.title << endl;

    return 0;
}