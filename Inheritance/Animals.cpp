#include<iostream>
#include<string>
using namespace std;

class Animal{
    protected:
        string eat;
        string drink;

    public:
        Animal(string e, string d){
            eat = e;
            drink = d;
        }
};

class Dog: public Animal{
    public:
        string DogName;
        int age;
        string sound;
        

        void Dogdisplay(){
            cout<<"My Dog name: "<<DogName<<", My Dog age: "<<age<<", Sound: "<<sound<<endl;
        }
};

class Cat: public Animal{
    public:
        string CatName;
        int age;
        string sound;

        

        void Catdisplay(){
            cout<<"My Cat name: "<<CatName<<", My cat age: "<<age<<", Sound: "<<sound<<endl;
        }
};

int main(){
    Dog d1;
    d1.DogName = "Rockey";
    d1.age = 2;
    d1.sound= "barking...";
    d1.Dogdisplay();

    Cat c1;
    c1.CatName = "Monty";
    c1.age = 2;
    c1.sound = "meow meow";
    c1.Catdisplay();
    return 0;
}