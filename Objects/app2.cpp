#include <iostream>
#include <string>
using namespace std;

class Class1{
    public:
        string name;
        int roll;
        int marks;
        bool isPass = true;

        void display(){
            cout<<"Name: "<<name<< " Roll: "<<roll<< " Marks: "<<marks<< " Result: "<<isPass<<endl; 
        }
};

int main(){
    Class1 sectionA;   // this is object 1
    sectionA.name = "Shubham";
    sectionA.roll = 13;
    sectionA.marks = 90;
    sectionA.isPass = true;
    sectionA.display();

    Class1 sectionB;  // this is object 2
    sectionB.name = "Nagmani";
    sectionB.roll = 15;
    sectionB.marks = 89;
    sectionB.isPass = true;
    sectionB.display(); 

    
    return 0;
}