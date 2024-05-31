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
   student(string s,int a,float b)// methods
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
   static void avrage(student obj1,student obj2)
   {
      float avg=(obj1.per+obj2.per)/2.0;
      cout<<"avrage percentage of "<<obj1.name<<" and "<<obj2.name<<" = "<<avg<<endl;
      cout<<"___________________________________________________________"<<endl;
   }
    static void avrage(student obj1,student obj2,student obj3)
   {
      float avg=(obj1.per+obj2.per+obj3.per)/3.0;
      cout<<"avrage percentage of "<<obj1.name<<" and "<<obj2.name<<" and "<<obj3.name<<" = "<<avg<<endl;
      cout<<"___________________________________________________________"<<endl;
   }
     static void avrage(student obj1,student obj2,student obj3,student obj4)
   {
      float avg=(obj1.per+obj2.per+obj3.per+obj4.per)/4.0;
      cout<<"avrage percentage of "<<obj1.name<<" and "<<obj2.name<<" and "<<obj3.name<<" and "<<obj4.name<<" = "<<avg<<endl;
      cout<<"___________________________________________________________"<<endl;
   }

};
int student::totalpass=0;
int student::totalfail=0;
int student::totalstd=0;
int main()
{
 student s1("ram",1001,23.67);
 student s2("rohan",1002,90.17);
 student s3("ayush",1003,12.55);
 student s4("shyam",1004,55.55);
 s1.diplaystudentresult();
 s2.diplaystudentresult();
 s3.diplaystudentresult();
 s4.diplaystudentresult();
 student::totalresult();
 student::disptotalstd();
 student::classinfo();
 student::avrage(s1,s2);
 student::avrage(s1,s2,s3);
 student::avrage(s1,s2,s3,s4);
 return 0;
}