#include<iostream>
using namespace std;
class circle
{
  float radius;// non static or instance variable
  float area;// non static or instance variable
  float circumference;// non static or instance variable
  public:
  circle(float r)// r is local variable
  {
    radius=r;
  }
  void calculatearea()
  {
    area=3.141*radius*radius;
    cout<<"area of circle which radius "<<radius<<" = "<<area<<endl;
  }
   void calculatecircumferenece()
  {
    circumference=2*3.141*radius;
    cout<<"circumference of circle which radius "<<radius<<" = "<<circumference<<endl;
  }
};
int main()
{
 circle c1(4.5),c2(2),c3(5);
 c1.calculatearea();
 c1.calculatecircumferenece();
 c2.calculatearea();
 c2.calculatecircumferenece();
 c3.calculatearea();
 c3.calculatecircumferenece();
    return 0;
}