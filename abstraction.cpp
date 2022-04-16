#include <iostream>
using namespace std;

class AbstractEmployee{
    virtual void Promotion() = 0;
};

class Employee:AbstractEmployee {
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

    void Promotion(){
        if(age>25)
            cout<<name<<" is going to get a promotion."<<endl;
        else
            cout<<name<<" is not getting promoted."<<endl;
    }
};

int main(){
    Employee e1 = Employee("Shila","Samsung",25);
    Employee e2 = Employee("John","Amazon",35);
    e1.Promotion();
    e2.Promotion();
}