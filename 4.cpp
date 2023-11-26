#include <iostream>
using namespace std;
int main(){
    cout<<"Nitesh Kumar"<<endl; cout<<"2822106"<<endl;
    int a,b; char o,choice;
    do{
        cout<<"Enter First Number, Operator, Second Number : ";
        cin>>a>>o>>b;
        switch (o){
            case '+':
                cout<<"Answer = "<<a+b<<endl;
                cout<<"Do another (Y/ N) ? "; cin>>choice;
                break;
            case '-':
                cout<<"Answer = "<<a-b<<endl;
                cout<<"Do another (Y/ N) ? "; cin>>choice;
                break;
            case '*':
                cout<<"Answer = "<<a*b<<endl;
                cout<<"Do another (Y/ N) ? "; cin>>choice;
                break;
            case '/':
                cout<<"Answer = "<<a/b<<endl;
                cout<<"Do another (Y/ N) ? "; cin>>choice;
                break;			
        }
    } while (choice=='y'|| choice=='Y');
}