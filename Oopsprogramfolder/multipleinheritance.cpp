#include<iostream>
using namespace std;
class addition
{
    public:
    void add(int a,int b)
    {
        cout<<"add = "<<(a+b)<<endl;
    }
};
class subtraction
{
    public:
    void sub(int a,int b)
    {
        cout<<"sub = "<<(a-b)<<endl;
    }
};
class multiplcation
{
    public:
    void mul(int a,int b)
    {
        cout<<"mul = "<<(a*b)<<endl;
    }
};
class calculater:public addition,public subtraction,public multiplcation
{
  public:
  void alloperation(int a,int b)
  {
    add(a,b);
    sub(a,b);
    mul(a,b);
  }
};
int main()
{
    calculater c1;
    //c1.alloperation(12,5);
    c1.add(17,89);
    c1.sub(17,89);
    c1.mul(17,89);
    return 0;
}