#include <iostream>
using namespace std;

class Chef {
    public: 
    string name;
        Chef(string aName){
            name = aName;
        }

        void make_chicken(){
            cout << "The chef makes yummy chicken" << endl;
        }
        void make_salad(){
            cout << "The chef makes salad" << endl;
        }
        void make_special_dish(){
            cout << "The chef makes bbq riq" << endl;
        }
};


class italian_chef: public Chef {
    public: 
        int age;
        italian_chef(string name, int a) : Chef(name), age(a){};

        void make_pasta(){
            cout << "The chef makes pasta" << endl;
        }
        void make_special_dish(){
            cout << "The chef makes chicken parm" << endl;
        }
};


int main(){
    Chef chef1("Burak");
    chef1.make_special_dish();

    italian_chef italian_chef("Christian",52);
    italian_chef.make_special_dish();
    cout << italian_chef.age << endl;
    cout << italian_chef.name;
    return 0;
}