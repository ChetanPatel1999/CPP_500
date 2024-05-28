#include<iostream>
using namespace std;
class student
{
   string name;// non static or instance variable
   int rno;// non static or instance variable
   float per;// non static or instance variable
   static int totalpass;
   static int totalfail;
   public :
   void setdata(string s,int a,float b)// methods
   {
    name =s;
    rno=a;
    per=b;
   }
   void diplaystudentresult()
   {
     cout<<"student result ........."<<endl;
     cout<<"student name : "<<name<<endl;
     cout<<"student rno : "<<rno<<endl;
     cout<<"student percentage : "<<per<<endl;
     if(per>33)
     {
      totalpass++;
      cout<<"student : Pass"<<endl;
     }
     else{
      totalfail++;
      cout<<"student : Fail"<<endl;
     }
     cout<<"___________________________________"<<endl;
   }
   void totalresult()
   {
      cout<<"total result in pass fail ...."<<endl;
      cout<<"Total Student Pass : "<<totalpass<<endl;
      cout<<"Total Student  Fail : "<<totalfail<<endl;
      cout<<"______________________________________"<<endl;
   }

};
int student::totalpass=0;
int student::totalfail=0;
int main()
{
 student s1,s2,s3,s4;
 s1.setdata("ram",1001,23.67);
 s2.setdata("rohan",1002,32.17);
 s3.setdata("ayush",1003,12.55);
 s4.setdata("shyam",1004,30.55);
 s1.diplaystudentresult();
 s2.diplaystudentresult();
 s3.diplaystudentresult();
 s4.diplaystudentresult();
 s1.totalresult();

    return 0;
}