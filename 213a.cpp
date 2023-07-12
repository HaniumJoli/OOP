// 21 3(a)
#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    friend Complex operator*(Complex a, Complex b);

    Complex &operator++()
    {
        real = real + 1;
        img = img + 1;
        return *this;
    }

    Complex operator++(int)
    {
        Complex temp = *this;
        ++(*this);
        return temp;
    }

    istream& operator>>(istream& is)
    {
        is >> real >> img;
        return is;
    }
    friend ostream& operator<<(ostream& os, Complex c);
};

Complex operator*(Complex a, Complex b)
{
    Complex x;
    x.real = (a.real * b.real) - (a.img * b.img);
    x.img = (a.real * b.img) + (a.img * b.real);
    return x;
}

ostream& operator<<(ostream& os, Complex c)
{
    os << c.real << " + " << c.img << "i" << endl;
    return os;
}

int main()
{
    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex c3 = c1 * c2;
    cout << c3;

    ++c1;
    cout << c1;

    Complex c4 = c2++;
    cout << c2;
    cout << c4;

    Complex c5;
    c5 >> cin;
    cout << c5;

    return 0;
}
