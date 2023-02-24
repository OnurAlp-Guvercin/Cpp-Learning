#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;

        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }
        bool has_honors(){
            if(gpa >= 3.5){return true;}
            return false;
        }
};



int main(){

    Student student1("Jim", "Business", 2.4);
    Student student2("Onur", "Science", 3.5);

    cout << student2.has_honors() << endl;
    cout << student1.has_honors() << endl;

    return 0;
}