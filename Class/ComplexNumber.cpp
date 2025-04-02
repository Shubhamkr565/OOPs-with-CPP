// Define a `ComplexNumber` class to perform addition of two complex numbers.

// The addition of two complex numbers follows this rule;
// (a+bi)+(c+di) = (a+c) + (b+d)i

// eg: (3+2i) + (4+5i) = (3+4) + (2+5)i  =  7+ 7i;

#include <iostream>
using namespace std;

class Complex{
    public:
        int real;
        int imaginary;

    void setValue(int r, int i){
        real = r;
        imaginary = i;
    }

    Complex add(Complex c){
        Complex result;
        result.real = real + c.real;
        result.imaginary = imaginary+c.imaginary;
        return result;
    }
    void display(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
};



int main(){
    Complex c1,c2,c3;
    c1.setValue(3,2);
    c2.setValue(4,5);
    c3 = c1.add(c2);
    cout<<"Sum "<<endl;
    c3.display();
    return 0;
}