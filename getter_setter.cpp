#include <iostream>
using namespace std;

class Movie {
    private:
        string rating;
    public:
        string title;
        string director;
    
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            set_rating(aRating);
        }
        //we put condition for the type of rating attribute
        void set_rating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R"){
                rating = aRating;
            }else{
                rating="NR";
            }
        }
        //we cannot get rating value without this fn because rating is in private
        string get_rating(){
            return rating;
        }
};



int main(){

    Movie movie1("The Avengers", "Joss Whedon", "PG-13");

    movie1.set_rating("G");

    cout << movie1.get_rating();

    return 0;
}