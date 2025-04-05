// Create a `Car` class where only `drive()` and `brake()` methods are accessible.


#include <iostream>
using namespace std;

class Car{
    private:
        int speed;

    public:
        Car() {
            speed = 0;
        }

        void drive(){
            speed += 10;
            cout<<"Driving...speed: "<<speed<<" km/hr "<<endl;
        }

        void brake(){
            if (speed >= 10){
                speed -= 10;
                cout<<"Breaking ....speed: "<<speed<<" km/h"<<endl;
            }else{
                cout<<"Car is already stopped!."<<endl;
            }
        }
};

int main(){
    Car c1;
    c1.drive();
    c1.drive();
    c1.drive();
    c1.brake();
}

