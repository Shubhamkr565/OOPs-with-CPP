#include <iostream>
#include <string>
using namespace std;

class Add {
    public:

        void add(int a, int b) {
            cout << "Integers add: " << a << " + " << b << " = " << a + b << endl;
        }

        void add(float x, float y) {
            cout << "Floats add: " << x << " + " << y << " = " << x + y << endl;
        }

        void add(string s1, string s2) {
            cout << "String add: " << s1 << " + " << s2 << " = " << s1 + " " + s2 << endl;
        }
};

int main() {
    Add a1;
    a1.add(10, 20);
    a1.add(10.5f, 20.5f);
    a1.add(string("Shubham"), string("Gupta"));
    return 0;
}
