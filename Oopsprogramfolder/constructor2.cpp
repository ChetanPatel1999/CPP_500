#include<iostream>
using namespace std;
class emp
{
    int id;
    float sal;
    public:
    emp()// non parameterized constructor
    {
        id=1009;
        sal=3000;
    }
    emp(int a,float b=5000)//parameterized constructor
    {
        id=a;
        sal=b;
    }
    void display()
    {
        cout<<"emp info : "<<endl;
        cout<<"emp id : "<<id<<endl;
        cout<<"emp sal : "<<sal<<endl;
    }
};
int main()
{
    emp e1(1001,12000.78),e2(1002,50000.50),e3(1004),e4;
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    return 0;
}