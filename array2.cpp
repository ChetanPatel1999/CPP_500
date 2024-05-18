//wap to take array input user and add all element of array.
#include<iostream>
using namespace std;
int  main()
{
 int arr[5];
 int i;
 cout<<"enter array element :";
 for(i=0;i<5;i++)
 {
    cin>>arr[i];
 }
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