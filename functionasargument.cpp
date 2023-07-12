#include <iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int process(int a,int b,int(*operation)(int,int))
{
    int result=operation(a,b);
    return result;
}
int main()
{
    int x=10;
    int y=5;
    cout<<process (x,y,add)<<endl;
    cout<<process (x,y,sub);
    return 0;
}