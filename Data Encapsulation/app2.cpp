#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string name;
        int age;
        int phone_no;
    
    public:
        Student(string n, int a, int no){
            name = n;
            setAge(a);
            setPhone_no(no);
        }

        void setAge(int a){
            if (a>=0 && a<=17){
                age = a;
                cout<<"You are under age.....\n";
            }else{
                cout<<"You are 18+\n ";
            }
        }
        void setPhone_no(int no){
            phone_no = no;
        }

    void display(){
        cout<<"Name: "+name<<" Age: "<<age<<" Mobile_no: "<<phone_no<<endl;
    }


};

int main(){
    Student s1("Shubham", 25, 9304788132);
    s1.setAge(8);
    s1.setPhone_no(12345678);
    s1.display();
}
