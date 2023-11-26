#include <iostream>
#include <sstream>
using namespace std;
class Employee
{
    protected:
    string name;
    int salary;
    public:
    Employee(const string n,unsigned int s):name(n),salary(s){}
};
class Manager: public Employee
{
    protected:
    string department;
    public:
    Manager(const string n,unsigned int s, const string d):Employee(n,s),department(d){}
    void toString()
    {
        cout<<"Name : "<<name<<endl<<"Deptt : "<<department<<endl<<"Salary : RS."<<salary<<endl<<endl;
    }
};
class Executive:public Manager
{
    public:
    Executive(const string n, unsigned int s, const string d):Manager(n,s,d){}
    void toString()
    {
        cout<<"Title: Executive "<<endl;
        Manager::toString();
    }
};
int main()
{
    cout << "Nitesh Kumar" << endl << "2822106" << endl;
    Manager obj("Saurabh Jain",100000,"Software Developer");
    Executive obj2("Ayushi Garg",45000,"Software Developer");
    cout<<"Call by Manager Object: "<<endl<<endl;
    obj.toString();
    cout<<"Call by Executive Object: "<<endl<<endl;
    obj2.toString();
    return 0;
}