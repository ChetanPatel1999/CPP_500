//wap to print even number series.
#include<iostream>
using namespace std;
int  main()
{
    int i;
    cout<<"even numbr series : ";
    for(i=1;i<=20;i++)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}