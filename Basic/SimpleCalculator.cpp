// Write a program that:  (Simple Calculatar)

// Defines a function called multiply that takes two int parameters and returns their product.
// In main(), sets two variables (e.g., 4 and 6).
// Calls the multiply function and prints the result like "4 * 6 = 24".


#include <iostream>


    int mul (int a, int b){
        return a*b;
    }



int main()
{
    int x = 4;
    int y = 6;
    
    int product = mul(x,y);
    std::cout<<x<<"*"<<y <<"="<< product <<std::endl;
    return 0;
}
