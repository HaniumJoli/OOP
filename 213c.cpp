//21 3(c)
#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;

public:
    Complex(int r=0, int i=0) 
    {
        real = r;
        img = i;
    }

    void show() {
        cout << real << " + " << img << "i" << endl;
    }

    friend Complex operator*(Complex a, Complex b);

    Complex& operator++() // prefix
    {
        real = real + 1;
        img = img + 1;
        return *this;
    }

    Complex operator++(int) // postfix
    {
        Complex temp = *this;
        ++(*this);
        return temp;
    }
};

Complex operator*(Complex a, Complex b) {
    Complex x;
    x.real = (a.real * b.real) - (a.img * b.img);
    x.img = (a.real * b.img) + (a.img * b.real);
    return x;
}

int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex c3 = c1 * c2;
    c3.show();

    ++c1;
    c1.show();

    Complex c4 = c2++;
    c2.show();
    c4.show();

    return 0;
}
