#include<iostream>
using namespace std;
class base 
{
    protected:
    int num;
    void set(int a)
    {
        num=a;
    }

};
class derived:public base
{
  public:
  void display()
  {
    set(67);
    cout<<"num = "<<num;
  }
};
int main()
{
    derived d;
    //d.num=12;// its protected data member 
    d.display();
    return 0;
}