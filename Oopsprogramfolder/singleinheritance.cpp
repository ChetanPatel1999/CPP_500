#include<iostream>
using namespace std;
class emp
{
    int id;
    string name;
    public:
    void setemp(int a,string s)
    {
        id=a;
        name=s;
    }
    void getemp()
    {
        cout<<"emp name : "<<name<<endl;
        cout<<"emm id :"<<id<<endl;
    }

};
class programmer :public emp
{
    string lang;
    public:
    void setlang(string s)
    {
        lang=s;
    }
    void display()
    {
        getemp();
        cout<<"language : "<<lang<<endl;
        cout<<"_________________________"<<endl;
    }
};
int main()
{
    programmer p1;
    p1.setemp(1001,"ram");
    p1.setlang("java");
    p1.display();
    return 0;
}