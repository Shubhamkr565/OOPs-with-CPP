// Create a `Student` class with private attributes and public getter and setter methods.

#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string name;
        int roll;
    public:
        void setName(string n){
            name = n;
        }
        void setRoll(int r){
            roll = r;
        }
        string getName(){
            return name;
        }
        int getRoll(){
            return roll;
        }
        void display(){
            cout<<"Student Name: "<<name<<" Roll: "<<roll<<endl;
        }
};

int main(){
    Student s1;
    s1.setName("Shubham");
    s1.setRoll(23);
    s1.getName();
    s1.getRoll();
    s1.display();
    return 0;
}