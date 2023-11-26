#include <iostream>cout << "Nitesh Kumar" << endl << "2822106" << endl;
using namespace std;
struct date{
    int day;
    int month;
    int year;
};
class hospital{
    string name;
    date admission;
    string disease;
    date discharge;
    public:
    void get_info(){
        cout << "Enter the Name of Patient : ";
        cin >> name;
        cout << "Enter the Date of Admission : ";
        cin >> admission.day >> admission.month >> admission.year;
        cout << "Enter the Name of the Disease : ";
        cin >> disease;
        cout << "Enter the Disharge Date : ";
        cin >> discharge.day >> discharge.month >> discharge.year;
    }
    void display(){
        cout << name << "\t" << admission.day << "/" << admission.month << "/" << admission.year << "\t" << disease << "\t" << discharge.day << "/" << discharge.month << "/" << discharge.year;
    }
};
class patient : public hospital{
    public:
    int age;
    void getage(){
        get_info();
        cout << "Enter the Age : ";
        cin >> age;
    }
};
int main(){
    
    int n;
    cout << "Enter the No. of Patient : ";
    cin >> n;
    patient ob[n];
    cout << "Enter the Details of Patients : " << endl;
    for (int i = 0; i < n; i++){
        ob[i].getage();
    }
    cout << endl<< endl;
    cout << "List of Pediatric Patients is : "<< endl;
    cout << "Name\tAdmission Date\tDisease\tDiscahrge date\n";
    for (int i = 0; i < n; i++){
        if (ob[i].age <= 18){
            ob[i].display();
        }
    }
}
