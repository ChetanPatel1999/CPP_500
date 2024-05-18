//wap print table of given number.
#include<iostream>
using namespace std;
int  main()
{
 int num,i,tab;
 cout<<"enter a num :";
 cin>>num;
 for(i=1;i<=10;i++)
 {
    tab=i*num;
    cout<<num<<" * "<<i<<" = "<<tab<<endl;
 }
    return 0;
}