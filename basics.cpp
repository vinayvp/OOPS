#include <iostream>
using namespace std;

class Employee{
    public:
    string name;
    string company;
    int age;
    
    void Introduce(){
        cout<<"Name- "<<name<<endl;
        cout<<"Company- "<<company<<endl;
        cout<<"Age- "<<age<<endl;
    }
};

int main(){
    Employee e1;
    e1.name = "Shila";
    e1.age = 25;
    e1.company = "Samsung";
    e1.Introduce();
}