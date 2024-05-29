#include<iostream>
using namespace std;
class student
{
   string name;// non static or instance variable
   int rno;// non static or instance variable
   float per;// non static or instance variable
   static int totalpass;
   static int totalfail;
   static int totalstd;
   public :
   void setdata(string s,int a,float b)// methods
   {
    totalstd++;
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
   static void totalresult()
   {
      cout<<"total result in pass fail ...."<<endl;
      cout<<"Total Student Pass : "<<totalpass<<endl;
      cout<<"Total Student  Fail : "<<totalfail<<endl;
      cout<<"______________________________________"<<endl;
   }
   static void disptotalstd()
   {
      cout<<"total student : "<<totalstd<<endl;
      cout<<"_________________________________"<<endl;
   }
   static void classinfo()
   {
      cout<<"information about all methods"<<endl;
      cout<<"____________________________________"<<endl;
   }

};
int student::totalpass=0;
int student::totalfail=0;
int student::totalstd=0;
int main()
{
 student s1,s2,s3,s4;
 s1.setdata("ram",1001,23.67);
 s2.setdata("rohan",1002,90.17);
 s3.setdata("ayush",1003,12.55);
 s4.setdata("shyam",1004,55.55);
 s1.diplaystudentresult();
 s2.diplaystudentresult();
 s3.diplaystudentresult();
 s4.diplaystudentresult();
 student::totalresult();
 student::disptotalstd();
 student::classinfo();

    return 0;
}