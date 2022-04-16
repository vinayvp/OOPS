#include <iostream>
using namespace std;

class Employee{
    public:
    string name;
    string company;
    int age;

    //Custom Constructor - Not a default constructor
    Employee(string Name, string Company, int Age){
        name = Name;
        company = Company;
        age = Age;
    }
    
    void Introduce(){
        cout<<"Name- "<<name<<endl;
        cout<<"Company- "<<company<<endl;
        cout<<"Age- "<<age<<endl;
    }
};

int main(){
    Employee e1 = Employee("Shila","Samsung",25);
    e1.Introduce();
}