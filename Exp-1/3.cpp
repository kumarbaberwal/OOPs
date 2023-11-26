#include<iostream>
using namespace std;
int main()
{
    cout<<"Nitesh Kumar"<<endl;
    cout<<"2822106"<<endl;
    int age;
    cout<<"Enter Your Age : ";
    cin>>age;
    if(age<18)
    {
        cout<<"You are not Eligible for Vote.";
    }
    else
    {
        cout<<"Yor are Eligible for Vote.";
    }
}