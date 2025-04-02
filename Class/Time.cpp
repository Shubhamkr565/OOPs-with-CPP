// Define a `Time` class to add two times given in hours and minutes.

#include <iostream>
using namespace std;

class Time{
    public:
        int hours, minutes;
    
    void setTime(int h, int m){
        hours = h;
        minutes = m;
    }

    void addTimes(Time t1, Time t2){
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours + (minutes/60);
        minutes = minutes%60;
    }

    void display(){
        cout<<"Time: "<<hours<<" Hours: "<<minutes<<" Minutes"<<endl;
    }
};

int main(){
    Time t1;
    t1.setTime(1,50);
    t1.display();
    Time t2;
    t2.setTime(2,45);
    t2.display();
    Time t3;
    t3.addTimes(t1,t2);
    t3.display();

    return 0;
}