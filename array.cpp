//wap to add all element of array.
#include<iostream>
using namespace std;
int  main()
{
 int arr[]={12,34,56,78,90};
 int i;
 cout<<"array elemet are : ";
 for(i=0;i<5;i++)
 {
    cout<<arr[i]<<" ";
 }
 int sum=0;
 // add all elemet of array
 for(i=0;i<5;i++)
 {
    sum=sum+arr[i];
 }
 cout<<endl<<"sum of all element = "<<sum<<endl;
    return 0;
}