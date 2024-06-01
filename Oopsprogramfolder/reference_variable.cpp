//reference variable in CPP
#include<iostream>
using namespace std;
void fun(int &f)//&f=a
{
    cout<<"f = "<<f<<endl;//12
    f=90;
    cout<<"f = "<<f<<endl;//90
}
int main()
{
    int a=12;
    cout<<"a = "<<a<<endl;//12
    fun(a);
    cout<<"a = "<<a<<endl;//90


    /*
    int a=12;
    int &b=a;
    cout<<a<<","<<b<<endl;//12 12 
    a=90;
    cout<<a<<","<<b<<endl;// 90 90
    b=56;
    cout<<a<<","<<b<<endl;// 56 56
    cout<<(&a)<<","<<(&b)<<endl;
    return 0;
    */
}