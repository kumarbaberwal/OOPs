#include <iostream>
using namespace std;
class A{
    int a;
    public:
    A(){  //default constructor
        a=10;
    }
    void display(){
        cout<<"The value of a is: "<<a<<endl;
    }
};
int main(){
    A obj;
    obj.display();
}

// #include <iostream>
// using namespace std;
// class A{
//     int a;
//     public:
//     A(int x){  //parameterized constructor
//         a=x;
//     }
//     void display(){
//         cout<<"The value of a is: "<<a<<endl;
//     }
// };
// int main(){
//     cout << "Nitesh Kumar" << endl; cout << "2822106" << endl;
//     A obj(20);
//     obj.display();
// }

// #include <iostream>
// using namespace std;
// class A{
//     public:
//     int a=30;
//     A(){} //default constructor
//     A(A &obj){  //Copy constructor
//         cout<<"Copy Constructor Called."<<endl;
//         a=obj.a;
//     }
// };
// int main(){
//     cout << "Nitesh Kumar" << endl; cout << "2822106" << endl;
//     A obj;  //calls the default constructor.
//     A obj2(obj); //calls the copy constructor.
//     cout<<"The value of a is: "<<obj2.a<<endl;
// }