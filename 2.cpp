#include <iostream>
using namespace std;
double pow(double n, int p=2){
    double r = 1;
    for (int i = 0; i < p; i++){
        r *= n;
    }
    return r;
}
int main(){
    cout<<"Nitesh Kumar"<<endl; cout<<"2822106"<<endl;
    cout << "Enter the Base Number : ";
    double n; int p; char c;
    cin >> n;
    cout<<"Do You want to give Power\nIf yes type 'y' or No type 'n' : ";
    cin>>c;
    if(c=='y' || c=='Y'){
        cout << "Enter the pow : ";
        cin >> p;
        cout << "The pow of " << n << " upto given value " << p << " of pow is : " << pow(n, p);
    }
    else{
        cout << "The pow of " << n << " upto defalut value 2 of pow" << " is : " << pow(n);
    }
}