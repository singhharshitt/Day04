#include <iostream>
using namespace std;

class Complex {
public:
    int real, img;

    Complex(int r = 0, int i = 0) : real(r), img(i) {}

    Complex operator + (const Complex& obj) {
        return Complex(real + obj.real, img + obj.img);
    }

    Complex operator - (const Complex& obj) {
        return Complex(real - obj.real, img - obj.img);
    }

    void input() {
        cin >> real >> img;
    }

    void output() {
        cout << real << " + " << img << "i" << endl;
    }
};

int main() {
    Complex ob1, ob2;

    cout << "Complex number 1: ";
    ob1.input();
    
    cout << "Complex number 2: ";
    ob2.input();

    Complex sum = ob1 + ob2;
    Complex sub = ob1 - ob2;

    cout << "Sum: ";
    sum.output();

    cout << "Difference: ";
    sub.output();

    return 0;
}
