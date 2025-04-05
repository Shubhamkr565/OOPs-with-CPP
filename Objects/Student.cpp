// Create multiple `Student` objects and store them in an array.

#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        int marks;
    
    void display(){
        cout<<"Name: "<<name<<"! Roll: "<<roll<<"! Marks: "<<marks<<endl;
    }
};

int main(){
    Student class2[3] = {{"Virat", 18, 95}, {"Rohit",45,95},{"Dhoni",07,80}};
    
    for (int i=0; i<3; i++){
        class2[i].display();
    }
    return 0;
}
