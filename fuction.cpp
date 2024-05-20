#include<iostream>
using namespace std;
void add()
{
    int a,b,sum;
    cout<<"enter two num : ";
    cin>>a>>b;
    sum=a+b;
    cout<<"sum of "<<a<<" + "<<b<<" = "<<sum<<endl;
}
int main()
{
    int n;
   while(true)
   {
     cout<<"if you want to add two numbers press 1 otherwise 0 :";
     cin>>n;
     if(n!=1)
     {
       break; 
     }
     add();
   }
   return 0;
}