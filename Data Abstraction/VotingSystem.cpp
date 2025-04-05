// Implement a `VotingSystem` class where only eligible users can vote.

#include <iostream>
using namespace std;

class Vote{
    private:
        int age;
    public:
        void setAge(int a){
            age = a;
        }

        void eligible(){
            if (age >=18){
                cout<<"Yes! You are Eligible for voting....."<<endl;
            }else{
                cout<<"No! You are not Eligible for voting...."<<endl;
            }
        }
};

int main(){
    Vote s1;
    s1.setAge(20);
    s1.eligible();
    Vote s2;
    s2.setAge(10);
    s2.eligible();
    return 0;
}