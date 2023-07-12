#include<bits/stdc++.h>
using namespace std;
class STRING
{
    int len;
    char *a;
    public:
    STRING()
    {
        len=0;
        a=new char[len+1];
        a[0]='\0';
    }
    STRING(const char *s)
    {
        len=strlen(s);
        a=new char[len+1];
        strcpy(a,s);
    }
    void deepcopy(const STRING& s)
    {
        len=s.len;
        a=new char[len+1];
        strcpy(a,s.a);
    }
    STRING(const STRING& s)
    {
        deepcopy(s);
    }
    STRING operator=(const STRING& s)
    {
        if(this==&s)  return *this; //a=a
        delete []a;  //b=a; but b already has allocated memory
        deepcopy(s);
        return *this;
    }
    bool operator==(const STRING &x)
    {
        return strcmp(a,x.a);
    }
    friend ostream& operator <<(ostream& out,STRING& s)
    {
        out<<s.a<<endl;
        return out;
    }
    STRING operator()(char* a, char* b)
    {
        STRING c;
        c.a=new char [strlen(a)+strlen(b)+1];
        c.len=strlen(a)+strlen(b)+1;
        strcpy(c.a,strcat(a,b));
        return c;
    }
};
int main()
{
    STRING A="hanium";
    STRING B="AHSAN";
    char a[]="hanium",b[]="maria";
    STRING C=A(a,b);
    //cout<<A<<B;
    cout<<C<<endl;
}
