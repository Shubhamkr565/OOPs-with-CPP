// Create a `Vehicle` base class and inherit `Car` and `Bike` from it.


#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    public:
    void startEngine(){
        cout<<"Engine Started...."<<endl;
    }
    void stopEngine(){
        cout<<"Engine Stopped...."<<endl;
    }
};

class Car: public Vehicle{
    public:
        void honk(){
            cout<<"Car Honk: Beep Beep"<<endl;
        }
};

class Bike: public Car{
    public:
        void kickStart(){
            cout<<"Bike started with Kick"<<endl;
        }
};

int main(){
    cout<<"Car Actions...."<<endl;
    Car mycar;
    mycar.startEngine();
    mycar.stopEngine();
    mycar.honk();

    cout<<"\nBike Actions...."<<endl;
    Bike mybike;
    mybike.startEngine();
    mybike.kickStart();
    mybike.honk();
    mybike.stopEngine();

    return 0;

}
