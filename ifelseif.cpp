//wap to find greatest number between three number. 
#include<iostream>
using namespace std;
int  main()
{
 int num1,num2,num3;
 cout<<"enter three numbers :";
 cin>>num1>>num2>>num3;
 if(num1>num2 && num1>num3)
 {
    cout<<"greatest num = "<<num1<<endl;
 }
 else if(num2>num1 && num2>num3)
 {
    cout<<"greatest num = "<<num2<<endl;
 }
 else{
    cout<<"greatest num = "<<num3<<endl;
 }
    return 0;
}