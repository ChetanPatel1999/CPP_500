#include<iostream>
using namespace std;
int factorial(int num)
{
    int fact=1;
    while(num>0)
    {
        fact=fact*num;//120
        num--;//0
    }
    return fact;
}
int main()
{
   cout<<"factorial = "<<factorial(5);
   return 0;
}