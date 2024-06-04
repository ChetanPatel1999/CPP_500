#include<iostream>
using namespace std;
class complex
{ 
    int real;
    int image;
    public:
    complex(){}
    complex(int a,int b)
    {
        real=a;
        image=b;
    }
    void display()
    {
     cout<<"complex number :"<<real<<" + "<<image<<"i"<<endl;
    }
    complex sum(complex obj)
    {
      complex ans;
      ans.real=real+obj.real;
      ans.image=image+obj.image;
      return ans;
    }
      complex sub(complex obj)
    {
      complex ans;
      ans.real=real-obj.real;
      ans.image=image-obj.image;
      return ans;
    }
};
int main()
{
    complex c1(12,5),c2(4,8),c3(2,6),c4,c5,c6;
    c1.display();
    c2.display();
    c3.display();
    c4=c1.sum(c2);
    c4.display();
    c5=c2.sum(c3);
    c5.display();
    c6=c1.sub(c2);
    c6.display();
    return 0;
}