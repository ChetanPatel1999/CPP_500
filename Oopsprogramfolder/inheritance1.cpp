#include<iostream>
using namespace std;
class A
{
    public:
    void m1()
    {
        cout<<"A -m1"<<endl;
    }
     void m2()
    {
        cout<<"A -m2"<<endl;
    }
};
class B:public A
{
    public:
     void m3()
    {
        cout<<"B -m3"<<endl;
    }
     void m4()
    {
        cout<<"B -m4"<<endl;
    }
};
int main()
{
    B ob;
    ob.m1();
    ob.m2();
    ob.m3();
    ob.m4();
    return 0;
}