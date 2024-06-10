#include<iostream>
using namespace std;
class base 
{
    private :
    int num;
    public:
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
    //cout<<"num = "<<num; //private data member cant inherite 
  }
};
int main()
{
    derived d;
   // d.num=12;// its private data member
    d.set(45);
    d.display();
    return 0;
}