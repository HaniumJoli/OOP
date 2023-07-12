#include<bits/stdc++.h>
using namespace std;
class my
{
    int num;
    static int count;
    public:
    void increment()
    {
        count++;
        num=count;
    }
    void getcount()
    {
        cout<<"count"<<count<<endl;
    }
};
int my::count;
int main()
{
    my a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();
    a.increment();
    b.increment();
    c.increment();
    a.getcount();
    b.getcount();
    c.getcount();
    return 0;

}