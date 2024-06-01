//default argument set in fuction
#include<iostream>
using namespace std;
void add(int a=8,int b=10)//default value of b is 10
{
    int sum=a+b;
    cout<<"sum ="<<sum<<endl;
}
void display_bill(int noitem ,int price=500)
{
    float bill;
    bill=noitem*price;
    cout<<"total pay bill : "<<bill<<endl;
}
int main()
{
    add(6,9);
    display_bill(5);
    return 0;
}