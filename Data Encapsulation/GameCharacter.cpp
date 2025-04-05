// Create a `GameCharacter` class where health and power levels are encapsulated.

#include <iostream>
#include <string>
using namespace std;

class GameCharacter{
    private:
        int health;
        int power;
    public:
        // using setter methods
        void setHealth(int h){
            health = h;
        }
        void setPower(int p){
            power = p;
        }
        // using getter methods
        int gethealth(){
            return health;
        }
        int getpower(){
            return power;
        }
        void display(){
            cout<<"Current Health: "<<health<<", Current Power: "<<power<<endl;
        }
};

int main(){
    GameCharacter g1;
    g1.setHealth(90);
    g1.setPower(100);
    g1.display();
    return 0;
}

