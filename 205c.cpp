#include <iostream>
using namespace std;
class base1
{
  public:
  void display()
  {
    cout<<"base1"<<endl;
  }
};
class base2: base1{
  public:
  void display()
  {
    cout<<"base2"<<endl;
  }
};
class derived: public base2
{
    public:
  void display()
  {
    cout<<"derived"<<endl;
  }
};
int main()
{
    derived dd;
    dd.display();
    return 0;
}