#include <iostream>
using namespace std;

class MathOps {
public:
    int a = 20;
    int b = 5;

    void addNums() {
        int s = a + b;
        cout << "Sum: " << s << endl;
    }

    void diffNums() {
        int d = a - b;
        cout << "Difference: " << d << endl;
    }

    void multNums();
    void divNums();
}; // class end

void MathOps::multNums() {
    int m = a * b;
    cout << "Product: " << m << endl;
}

void MathOps::divNums() {
    int q = a / b;
    cout << "Quotient: " << q << endl;
}

int main() {
    MathOps obj;
    obj.addNums();
    obj.diffNums();
    obj.multNums();
    obj.divNums();
    return 0;
}
