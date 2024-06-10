#include<iostream>
using namespace std;
class base 
{
    public :
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
    cout<<"num = "<<num;
  }
};
int main()
{
    derived d;
    d.num=12;
    d.display();
    return 0;
}