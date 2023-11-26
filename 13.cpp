#include <iostream>
#include <fstream>
using namespace std;
class Student{
    int rn,marks;
    string name;
    public:
    void getData(){
        cout<<endl<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Roll no. : ";
        cin>>rn;
        cout<<"Enter Marks : ";
        cin>>marks;
    }
};
int main(){
    int m;
    ofstream wf("student.dat", ios::out | ios::binary);
    cout<<"Enter the Number of Students: ";
    cin>>m;
    Student obj[m];
    for(int i=0;i<m;i++)
    {
        obj[i].getData();
        wf.write((char*)&obj[i],sizeof(obj[i]));
    }
    wf.close();
    return 0;
}