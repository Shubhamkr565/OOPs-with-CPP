// Create a `BookStore` class with private attributes for book name and price.

#include <iostream>
#include <string>
using namespace std;

class BookStore{
    private: 
        string name;
        int price;
    public:
        void setName(string n){
            name = n;
        }
        void setPrice(int p){
            price = p;
        }
        string getName(){
            return name;
        }
        int getPrice(){
            return price;
        }
        void display(){
            cout<<"Book name: "<<name<<", Book Price: "<<price<<endl;
        }
};

int main(){
    BookStore b1;
    b1.setName("C++ programming");
    b1.setPrice(1200);
    b1.display();
    return 0;
}