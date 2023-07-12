//20 3(a)
#include<bits/stdc++.h>
using namespace std;
class Complex
{
    int real;
    int img;
    public:
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    void print()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    Complex operator++(int) //post increment
    {
        Complex temp(real,img);
        real++;
        img++;
        return temp;
    }
    Complex operator++() //pre increment
    {
        real++;
        img++;
        return *this;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    Complex operator*(Complex c)
    {
        Complex temp;
        temp.real=real*c.real-img*c.img;
        temp.img=real*c.img+img*c.real;
        return temp;
    }
    friend istream& operator>>(istream &is,Complex &c);
    friend ostream& operator<<(ostream &os,Complex &c);
};

istream& operator>>(istream &is,Complex &c)
{
    is>>c.real>>c.img;
    return is;
}

ostream& operator<<(ostream &os,Complex &c)
{
    os<<c.real<<" + "<<c.img<<"i"<<endl;
    return os;
}

int main()
{
    Complex c1(5,3);
    Complex c2(10,5);
    Complex c3;
    c3=c1+c2;
    c3.print();
    Complex c4=++c3;
    c4.print();
    c3.print();
    return 0;
}