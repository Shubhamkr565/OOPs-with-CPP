// Write a program that:  (Even or Odd Checker)

// Sets an int variable to 7 (or any number you like).
// Uses an if-else statement to check if the number is even or odd.
// Prints "Even" or "Odd" accordingly.
// Bonus: Add a loop to check numbers from 1 to 10.


#include <iostream>

int main(){
    int a = 8;
        if (a%2==0){
            std::cout<<"Even"<<std::endl;
        }else{
            std::cout<<"Odd"<<std::endl;
        }


    std::cout<<"Checking 1 to 10 "<<std::endl;

    for (int i=1; i<10; i++){
        if (i%2==0){
            std::cout<<i<<" is Even" <<std::endl;
        }else{
            std::cout<<i<<" is Odd"<<std::endl;
        }
    }
    return 0;
}


