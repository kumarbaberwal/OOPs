#include <iostream>
using namespace std;
class DB;
class DM{
    public:
    float metres;
    float centimeters;
    friend float add(DM, DB, int);
};
class DB{
    public:
    float feet;
    float inch;
    friend float add(DM, DB, int);
};
float add(DM obj, DB obj2, int opt)
{

    if (opt == 1)
    {
        obj2.feet = obj2.feet / 3.28;
        obj2.inch = obj2.inch * 2.54;
        cout << "The Answer is " << obj.metres + obj2.feet << " Metres and " << obj.centimeters + obj2.inch << " Centimetres" << endl;
    }
    else
    {
        obj.metres = obj.metres * 3.28;
        obj.centimeters = obj.centimeters / 2.54;
        cout << "The Answer is " << obj.metres + obj2.feet << " Feet and " << obj.centimeters + obj2.inch << " Inches" << endl;
    }
}
int main()
{
    DM obj; DB obj2; int k;
    cout << "Nitesh Kumar" << endl << "2822106" << endl;
    cout << "Insert Metres and Centimeters: ";
    cin >> obj.metres >> obj.centimeters;
    cout << "Insert Feet and Inches: ";
    cin >> obj2.feet >> obj2.inch;
    cout << "Press"<<endl<<"1.) Display in Metres."<<endl<<"2.) Display in Feet."<<endl;
    cin >> k;
    add(obj, obj2, k);
    return 0;
}
