#include<iostream>
using namespace std;
void add(int a,int b)
{
    int sum=a+b;
    cout<<"sum of "<<a<<" + "<<b<<" = "<<sum<<endl;
}
string fun(string a,string b)
{
    return (a+" "+b);
}
int main()
{

   cout<<fun("chetan","patel")<<endl;
   return 0;
}
/*int main()
{
  int res= fun(10);
  cout<<res<<endl;
   return 0;
}*/