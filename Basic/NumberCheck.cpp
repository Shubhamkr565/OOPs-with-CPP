// Write a program that:  (Number Check)

// Uses an int variable with the value 15.
// Uses an if statement to check if the number is greater than 10.
// Prints "Big" if true, or "Small" if false.

#include <iostream>

int main(){
    int a = 15;

    if (a>10){
        std::cout<<"BIG"<<std::endl;
    }else{
        std::cout<<"Small"<<std::endl;
    }   
    return 0;
}