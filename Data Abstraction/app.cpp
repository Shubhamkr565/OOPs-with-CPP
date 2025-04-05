#include <iostream>
using namespace std;

class Calculator {
private:
    // Implementation details are hidden
    int result;

public:
    // Public interface - abstraction
    void add(int a, int b) {
        result = a + b;
    }
    
    void subtract(int a, int b) {
        result = a - b;
    }
    
    int getResult() {
        return result;
    }
};

int main() {
    Calculator calc;  // User only interacts with public methods
    calc.add(5, 3);
    cout << "Addition result: " << calc.getResult() << endl;
    calc.subtract(10, 4);
    cout << "Subtraction result: " << calc.getResult() << endl;
    return 0;
}