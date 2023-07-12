#include <iostream>
using namespace std;
int main()
{
    int data[]={10,340,200,0,50,60};
    float sum=0;
    try{
    for(int i=0;i<=sizeof(data)/sizeof(int);i++)
    {
        if(data[i]==0)
        {
            throw "divide by zero";
        }
        sum+=1/static_cast<float>(data[i]);
        cout<<sum<<endl;
    }
    }
    catch(const char*exception)
    {
        cerr<<"exception caught"<<exception<<endl;
    }
    return 0;
}