/* #include<bits/stdc++.h>
using namespace std;
void sval(const int *val)
{
    int *p;
    p=const_cast<int*>(val);
    *p=*val**val;
}
int main()
{
    int x=10;
    cout<<"x before call"<<" "<<x<<endl;
    sval(&x);
    cout<<"after call"<<" "<<x<<endl;
    return 0;
} */
#include<bits/stdc++.h>
using namespace std;
void sval(const int &val)
{
  const_cast<int&>(val)=val*val;
}
int main()
{
    int x=10;
    cout<<"x before call"<<" "<<x<<endl;
    sval(x);
    cout<<"after call"<<" "<<x<<endl;
    return 0;
}