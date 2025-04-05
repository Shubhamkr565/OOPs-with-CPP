// Create a `Book` object with methods to set and get book details.

#include <iostream>
#include <string>
using namespace std;

class Book{
    private:
        string title;
        int price;
    
    public:
        void setDetail(string t, int p){
            title = t;
            price = p;
        }
        void getDetail(){
            cout<<"Book title: "<<title<<"! Book price: "<<price<<endl;
        }
};

int main(){
    Book b1;
    b1.setDetail("C++ proigramming ", 1200);
    b1.getDetail();

    return 0;
}