#include <iostream>
using namespace std;

class Employee{
private:
    string company;
    int age;
protected:
    string name;
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

    //virtual functions check if there is another fully implemented function in dervied class, 
    // if yes, it executes that, else it executes the virtual function
    virtual void Work(){
        cout<<getName()<<" is doing some tasks."<<endl;
    }
};

class Developer:public Employee{ //inherited employee class as private
private:
    string favLang;
public:
    Developer(string Name, string Company, int Age, string FavLang):Employee(Name,Company,Age){
        favLang = FavLang;
    }
    void getLang(){
        cout<<getName()<<" works in "<<getCompany()<<" and loves "<<favLang<<endl;
    }

    void Work(){
        cout<<getName()<<" is writing code."<<endl;
    }
};

class Manager:public Employee{
private:
    string project;
public:
    Manager(string Name, string Company, int Age, string Project):Employee(Name,Company,Age){
        project = Project;
    }

    void getProject(){
        cout<<name<<" works in "<<getCompany()<<" and is managing "<<project<<" project."<<endl;
    };

    //Here lets not write any work function, lets use the function of base class
};

int main(){
    Developer d1 = Developer("Shila","Samsung",25,"C++");
    Manager m1 = Manager("John","Amazon",35,"AWS");
    
    //Polymorphism implementation - in order for this to work, we have to inherit base class as public
    Employee* e1 = &d1;
    Employee* e2 = &m1;

    e1->Work();
    e2->Work();
    
}