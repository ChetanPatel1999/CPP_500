//factorial program using while loop.
//5----->120
//4------>24
#include<iostream>
using namespace std;
int  main()
{
 int num,fact=1;
 cout<<"enter a num :";
 cin>>num;// 5
 while(num>0)
 {
  fact=fact*num;//120
  num--;//0
 }
 cout<<"factorila = "<<fact<<endl;
    return 0;
}