#include<iostream>
using namespace std;
class student
{
   string name;// data memebrs
   int rno;
   float per;
   public :
   void setdata(string s,int a,float b)// methods
   {
    name =s;
    rno=a;
    per=b;
   }
   void diplaydata()
   {
     cout<<"student info ........."<<endl;
     cout<<"student name : "<<name<<endl;
     cout<<"student rno : "<<rno<<endl;
     cout<<"student percentage : "<<per<<endl;
     cout<<"___________________________________"<<endl;
   }
};
int main()
{
 student s1,s2,s3;
 s1.setdata("ram",1001,45.67);
 s2.setdata("rohan",1002,90.17);
 s3.setdata("ayush",1003,80.55);
 s1.diplaydata();
 s2.diplaydata();
 s3.diplaydata();
    return 0;
}