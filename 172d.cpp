//17 2(d)
#include <iostream>
using namespace std;
class test
{
    static int x;
    public:
    static int y;
    void f(int x)
    {
        cout<<"test::x="<<test::x<<endl;
        cout<<"x="<<x<<endl;
    }
};
int test::x=-1;
int test::y=2;
int main()
{
    test t;
    int x=3;
    t.f(3);
    cout<<"test::y="<<test::y<<endl;
    return 0;
}