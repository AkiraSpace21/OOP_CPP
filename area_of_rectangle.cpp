#include <iostream>
using namespace std;

class Box {
private:
    float h, w;
    float result;

public:
    Box() {
        cout << "Enter height: ";
        cin >> h;
        cout << "Enter width: ";
        cin >> w;
    }

    void showArea() {
        result = h * w;
        cout << "\nArea = " << result << endl;
    }
};

int main() {
    Box b1;
    b1.showArea();
    return 0;
}
