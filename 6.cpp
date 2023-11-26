#include <iostream>
using namespace std;
struct phone
{
    int area_code;
    int exchange;
    int number;
} p1, p2;
int main()
{
    p1.area_code = 839;
    p1.exchange = 803;
    p1.number = 8384;
    cout<<"Nitesh Kumar"<<endl;cout<<"2822106"<<endl;
    cout << "Enter your area code, exchange, and number: ";
    cin >> p2.area_code>> p2.exchange>> p2.number;
    cout << "My Number is : "<<"("<<p1.area_code<<") "<<p1.exchange <<"-" <<p1.number<<endl;
    cout << "Your Number is : "<< "("<<p2.area_code<<") "<<p2.exchange<<"-"<<p2.number<<endl;
}
