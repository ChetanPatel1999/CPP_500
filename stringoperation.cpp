//wap to uppercase later or lower case later.
#include<iostream>
using namespace std;
int  main()
{
 string s;
 cout<<"enter a string :";
 cin>>s;//chETan
 int i,U=0,L=0;
 for(i=0;s[i]!='\0';i++)
 {
    if(s[i]>='A' && s[i]<='Z')
    {
         U++;
    }
    else{
        L++;
    }
 }
 cout<<"total lower case = "<<L<<endl;
 cout<<"total uper case = "<<U<<endl;
    return 0;
}