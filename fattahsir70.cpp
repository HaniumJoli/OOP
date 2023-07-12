#include<bits/stdc++.h>
using namespace std;
class my
{
    int len;
    char *p;
    public:
    my()
    {
        len=0;
        p=new char[len+1];
        p[0]='\0';
    }
    my(const char *s)
    {
        len=strlen(s);
        p=new char[len+1];
        strcpy(p,s);
    }
    ~my()
    {
        delete[] p;
    }
    void display()
    {
        cout<<p<<endl;
    }
    void join(const my &a,const my &b);

};
void my::join(const my &a,const my &b)
{
    len=a.len+b.len;
    delete[] p;
    p=new char[len+1];
    strcpy(p,a.p);
    strcat(p,b.p);
}
int main()
{
    const char *first="hanium";
    const char *second="maria";
    my x1(first),x2(second),x3("joli"),s1,s2;
    s1.join(x1,x2);
    s2.join(s1,x3);
    x1.display();
    x2.display();
    x3.display();
    s1.display();
    s2.display();
    return 0;
}