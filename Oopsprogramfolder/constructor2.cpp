#include<iostream>
using namespace std;
class emp
{
    int id;
    float sal;
    public:
    emp(int a,float b)
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
    emp(){}
};
int main()
{
    emp e1(1001,12000.78),e2(1002,50000.50);
    e1.display();
    e1.display();
    e2.display();
    return 0;
}