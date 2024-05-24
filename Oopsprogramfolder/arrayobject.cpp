#include<iostream>
using namespace std;
class emp
{
    string name;
    int id;
    public:
    //setter method
    void setdata();//declaration
    //getter method
    void getdata();
};
void emp::setdata()//(::)scopresolution operator
{
    cout<<"enter info of emp :"<<endl;
    cout<<"enter name :";
    cin>>name;
    cout<<"enter id :";
    cin>>id;
}
void emp::getdata()
{
    cout<<"emp info :"<<endl;
    cout<<"emp name :"<<name<<endl;
    cout<<"emp id :"<<id<<endl;
}  
int main()
{
    emp e[3];
    int i;
    for(i=0;i<3;i++)
    {
      e[i].setdata();
    }
    for(i=0;i<3;i++)
    {
      e[i].getdata();
    }
       
    return 0;
}