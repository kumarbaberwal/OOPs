#include <iostream>
using namespace std;
class A{
    int a=10;
    public:
    friend void fun(A obj){  //Inside the Class
        cout<<"The value of Private Member is: "<<obj.a<<endl;
    }
    friend void gun(A obj); //Outside the Class
};
void gun(A obj){
    cout<<"The value of Private Member is: "<<obj.a<<endl;
}
int main()
{
    cout<<"Nitesh Kumar"<<endl; cout<<"2822106"<<endl;
    A obj;
    fun(obj);  //Inside the Class
    gun(obj);  //Outside the Class
}