#include<iostream>
using namespace std;
class emp
{
    string name;
    int id;
    public:
    //setter method
    void setdata(string,int);//declaration
    //getter method
    void getdata();
};
void emp::setdata(string s,int a)//(::)scopresolution operator
{
    name=s;
    id=a;
}
void emp::getdata()
{
    cout<<"emp info :"<<endl;
    cout<<"emp name :"<<name<<endl;
    cout<<"emp id :"<<id<<endl;
}  
int main()
{
    emp e1,e2;
    e1.setdata("ram",1234);
    e2.setdata("shyam",1235);
    e1.getdata();
    e2.getdata();   
    return 0;
}