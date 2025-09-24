#include <iostream>
using namespace std;

class Vehicle {
public:
    string company;
    string cost;
    int purchaseYear;

    void inputCompany() {
        cout << "Enter car brand: ";
        cin >> company;
    }

    void inputCost() {
        cout << "Enter car price: ";
        cin >> cost;
    }

    void inputYear() {
        cout << "Enter year of purchase: ";
        cin >> purchaseYear;
    }

    void showDetails() {
        cout << "\n--- Car Details ---" << endl;
        cout << "Brand: " << company << endl;
        cout << "Price: " << cost << endl;
        cout << "Year: " << purchaseYear << endl;
    }
};

int main() {
    Vehicle v;
    v.inputCompany();
    v.inputCost();
    v.inputYear();
    v.showDetails();
    return 0;
}
