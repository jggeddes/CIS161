#include <iostream>
using namespace std;

class Product {
private:
    string name;
public:
    Product(string name): name(name) {}
    string getName() {
        return name;
    }
};

class Factory {
private:
    string location;
    int capacity;
public:
    Factory(string location, int capacity): location(location), capacity(capacity) {}
    void makeProduct(Product product);
};

void Factory::makeProduct(Product product) {
    if (capacity > 0) {
        cout << "Factory is now making " << product.getName() << endl;
    } else {
        cout << "Factory out of capacity." << endl;
    }
}

int main() {
    /*Create at least 2 factories and 5 products.
    Call makeProduct to start making the products at the factories.*/

    //Implementing code
    //Creating factory objects
    Factory f1("Loc124", 100);
    Factory f2("Loc435", 80);

    //Creating products
    Product p1("Biscuits");
    Product p2("Pencil");
    Product p3("Pen");
    Product p4("Ball");
    Product p5("Toys");

    //Calling makeProduct to start making the products at the factories.
    f1.makeProduct(p1);
    f1.makeProduct(p2);
    f1.makeProduct(p3);
    f2.makeProduct(p4);
    f2.makeProduct(p5);

    return 0;
}
