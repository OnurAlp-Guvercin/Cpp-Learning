#include <iostream>
using namespace std;

int main()
{
    int secret_num = 7;
    int guess;
    int guess_count = 0;
    int guess_limit = 3;
    bool out_of_guesses = false;

    while(guess != secret_num && !out_of_guesses)
    {
        if(guess_count < guess_limit){
            cout << "Enter the number: ";
            cin >> guess;
            guess_count++;
        }else{
            out_of_guesses = true;
        }  
    }
    
    /********************************************/
    if(out_of_guesses){
        cout << "You lose!" << endl;
    } else {
        cout << "You win!";
    }
    /********************************************/

    return 0;
}