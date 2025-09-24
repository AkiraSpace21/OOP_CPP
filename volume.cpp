#include <iostream>
using namespace std;

class Box {
    double h = 2.0;
    double w = 3.0;
    double l = 5.0;

public:
    double getVolume() {
        return h * w * l;
    }
}; 

int main() {
    Box b1;
    double volume = b1.getVolume();
    cout << "Volume: " << volume << endl;
    return 0;
}
