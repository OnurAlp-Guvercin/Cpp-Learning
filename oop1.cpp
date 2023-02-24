#include <iostream>
//using namespace std;
using std::string;


// Creating abstraction
class abstract_employee{
    virtual void ask_for_promotion() = 0;
};

class Employee: abstract_employee{
private: 
    //encupsulation
    string Name;
    string Company;
    int Age;

public: 
    //create setter
    void set_name(string name){
        Name = name;
    }
    //create getter
    string get_name(){
        return Name;
    }
    //create setter
    void set_company(string company){
        Company = company;
    }
    //create getter
    string get_company(){
        return Company;
    }
    //create setter
    void set_age(int age){
        if(age>=18){Age = age;}
    }
    //create getter
    int get_age(){
        return Age;
    }

    void introduce_yourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }//constructer is built
    
    // Abstraction implementation
    void ask_for_promotion(){
        if(Age>=30) {std::cout << Name << " got promoted!" << std::endl;}
        else {std::cout << Name << " no promotion!" << std::endl;}      
    }
};


class Developer: Employee{
public:
    string Fav_prog_lang;
    // since we created constructor in Employee class we lost default constructor therefore we need to create new cpnstructor class
    Developer(string name, string company, int age, string fav_prog_lang):
    Employee(name,company,age)
    {Fav_prog_lang = fav_prog_lang;}

    void fix_bug(){
        std::cout << get_name() << " fixed bug using " << Fav_prog_lang << std::endl;
    }

};


int main()
{

    Employee employee_1("Onur Alp", "Baykar", 30);

    // Before constructer we can use below code
    // employee_1.Name="Onur Alp";
    // employee_1.Company="Baykar";
    // employee_1.Age=25;

    //employee_1.introduce_yourself();

    Employee employee_2("John", "Amazon", 24);

    // Before constructer we can use below code
    // employee_2.Name = "John";
    // employee_2.Company = "Amazon";
    // employee_2.Age = 24;

    //employee_2.introduce_yourself();

    // employee_1.set_age(39);
    // std::cout << employee_1.get_name() << " is " << employee_1.get_age() << " years old." << std::endl;

    // employee_1.ask_for_promotion();
    // employee_2.ask_for_promotion();

    Developer d("Onur Alp Guvercin","Baykar", 25, "C++");
    d.fix_bug();

}