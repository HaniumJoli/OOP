#include <iostream>
using namespace std;
class mul
{
    int val;
public:
mul(){}
mul(int val){ this->val = val; }
int operator()(int data)
{
    return val*data;
}



};
int main()
{ 
    mul x(2);
    cout<<x(2)<<endl;
    cout<<x(10);
    return 0;
}
