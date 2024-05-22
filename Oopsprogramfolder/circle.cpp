#include<iostream>
using namespace std;
class circle
{
  float radius;
  float area;
  float circumference;
  public:
  void setradius(float r)
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
 circle c1,c2,c3;
 c1.setradius(4.5);
 c2.setradius(2);
 c3.setradius(5);
 c1.calculatearea();
 c1.calculatecircumferenece();
 c2.calculatearea();
 c2.calculatecircumferenece();
 c3.calculatearea();
 c3.calculatecircumferenece();
    return 0;
}