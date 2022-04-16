#include <iostream>
using namespace std;

class AbstractEmployee{
public:
    virtual void Promotion() = 0;
};

class Employee:public AbstractEmployee {
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

    void Promotion(){
        if(age>25)
            cout<<name<<" is going to get a promotion."<<endl;
        else
            cout<<name<<" is not getting promoted."<<endl;
    }
};

class Developer:Employee{ //inherited employee class as private
private:
    string favLang;
public:
    Developer(string Name, string Company, int Age, string FavLang):Employee(Name,Company,Age){
        favLang = FavLang;
    }
    void getLang(){
        cout<<getName()<<" works in "<<getCompany()<<" and loves "<<favLang<<endl;
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
};

int main(){
    Developer d1 = Developer("Shila","Samsung",25,"C++");
    Manager m1 = Manager("John","Amazon",35,"AWS");
    d1.getLang();
    // d1.Promotion(); cannot be called because Employee is inherited as private
    m1.getProject();
    m1.Promotion();
}