#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
        string brand;
        void honk(){
            cout<<"Beep" "Beep"<<endl;
        }
};


int main(){
    Car MyCar;
    MyCar.brand = "Mahendra";
    MyCar.honk();
    return 0;
}