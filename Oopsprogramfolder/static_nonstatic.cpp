#include<iostream>
using namespace std;
class demo
{
    int a,b;
    static int c,d;
    public:
    demo(int r,int s,int t,int u)
    {
        a=r;
        b=s;
        c=t;
        d=u;
    }
    void display()
    {
        cout<<a<<","<<b<<","<<c<<","<<d<<endl;
    }
};
int demo::c;
int demo::d;
int main()
{
    demo d1(12,13,111,222);
    demo d2(14,15,333,444);
    demo d3(16,17,555,666);
    
   
    d1.display();
    d2.display();
    d3.display();
    return 0;
}