// Define a `Shape` class with methods for calculating area and volume.

#include <iostream>
using namespace std;

class Shape{
    private: 
        double length;
        double width;
        double height;
    
    public:
    // Shape(){
    //     length = 0;
    //     width = 0;
    //     height = 0;
    // }
    void setDimension(double l, double w, double h){
        length = l;
        width = w;
        height = h;
    }

    double area(){
        return length*width;
    }
    double volume(){
        return length*width*height;
    }
};

int main(){
    Shape s1;
    s1.setDimension(2,5,10);
    cout<<"Area = "<<s1.area()<<endl;
    cout<<"Volume = "<<s1.volume()<<endl;

    return 0;
}

