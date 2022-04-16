#include <iostream>
using namespace std;

class Employee{
private:
    string name;
    string company;
    int age;
public:
    //private data are accessed via getters and setters
    void setName(string Name){
        name = Name;  //setter
    }
    string getName(){
        return name;  //getter
    }

    void setCompany(string Company){
        company = Company;  //setter
    }
    string getCompany(){
        return company;  //getter
    }

    void setAge(int Age){
        if(Age>=18) age = Age;  //setter
    }
    int getAge(){
        return age;  //getter
    }

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

    e1.setName("Sima");
    e1.setAge(5);
    e1.Introduce();
}