#include <iostream>
using namespace std;
class tollbooth{
    unsigned int car;
    double amount;
    public:
    tollbooth(){
        this->car = 0;
        this->amount = 0;
    }
    void payingcar(){
        this->car++;
        this->amount += 0.50;
    }
    void nopaycar(){
        this->car++;
    }
    void display(){
        cout << "Number of cars: " << car << endl;
        cout << "Amount: " << amount << endl;
    }
};
int main(){
    cout << "Nitesh Kumar" << endl;
    cout << "2822106" << endl;
    char c ='y'; int choice; tollbooth obj;
    do{
        cout << "1.) For Paying"<<endl<<"2.) For nopaying"<<endl<<"3.) Display/Exit"<<endl;
        cout << "Enter choice: "; cin >> choice;
        switch (choice){
        case 1:
            obj.payingcar();
            cout << "Car Added"<<endl;
            break;
        case 2:
            obj.nopaycar();
            cout << "Car Added"<<endl;
            break;
        case 3:
            obj.display();
            c = 'n';
            break;
        }
        if (c == 'y' || c == 'Y'){
            cout <<"Do you want to continue Y/N : ";
            cin >> c;
        }
    } while (c == 'y' || c == 'Y');
    return 0;
}
