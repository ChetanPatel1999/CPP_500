//fuction overloding in cpp
#include<iostream>
using namespace std;
void fun()
{
    cout<<"hi  i am fun with o args"<<endl;
}
void fun(int a)
{
    cout<<"hi  i am fun with 1 int args"<<endl;
}
void fun(char a)
{
    cout<<"hi  i am fun with 1 char args"<<endl;
}
void fun(int a,int b)
{
    cout<<"hi  i am fun with 2 int int args"<<endl;
}
void fun(string a,int b)
{
    cout<<"hi  i am fun with 2 string int args"<<endl;
}
void fun(int a,string b)
{
    cout<<"hi  i am fun with 2  int string args"<<endl;
}
int main()
{
    fun("hi",89);
    fun(45,"by");
    return 0;
}