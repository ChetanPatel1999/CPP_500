#include<iostream>
using namespace std;
class student
{
    string name;
    int rno;
    public:
    void setstd(string s,int a)
    {
        name=s;
        rno=a;
    }
    void displaystd()
    {
        cout<<"name of student :"<<name<<endl;
        cout<<"rno of student :"<<rno<<endl;
    }
};
class mathstd :public student
{
    int math;
    int pysics;
    int chemestry;
    public:
    void setmathmarks(int s1,int s2,int s3)
    {
        math=s1;
        pysics=s2;
        chemestry=s3;
    }
     void displaymathmarks()
    {
        displaystd();
        cout<<"math : "<<math<<endl;
        cout<<"pysics : "<<pysics<<endl;
        cout<<"chemestry : "<<chemestry<<endl;
        cout<<"__________________________________"<<endl;
    }
};
class comstd :public student
{
    int account;
    int bussiness;
    int economics;
    public:
    void setcommarks(int s1,int s2,int s3)
    {
        account=s1;
        bussiness=s2;
        economics=s3;
    }
     void displaycommarks()
    {
        displaystd();
        cout<<"account : "<<account<<endl;
        cout<<"bussiness : "<<bussiness<<endl;
        cout<<"economics : "<<economics<<endl;
        cout<<"__________________________________"<<endl;
    }
};
int main()
{
    mathstd s1;
    s1.setstd("ram",1001);
    s1.setmathmarks(50,56,78);
    s1.displaymathmarks();
    comstd s2;
    s2.setstd("shyam",1002);
    s2.setcommarks(54,70,88);
    s2.displaycommarks();

}