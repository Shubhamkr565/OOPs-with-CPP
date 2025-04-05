#include <iostream>
#include <string>
using namespace std;

class Math{
    public:
        int add(int a, int b){
            return a+b;
        }
        
        int add(int a, int b, int c){
            return a+b+c;
        }
};

int main(){
    Math obj1;
    cout<<"Sum of 2 number: "<<obj1.add(5,3)<<endl; 
    cout<<"Sum of 3 number: "<<obj1.add(5,5,4)<<endl;

    return 0;
}