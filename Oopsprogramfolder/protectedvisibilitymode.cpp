#include<iostream>
using namespace std;
class base 
{
    private:
    int num;
    protected:
    void setdata(int a)
    {
        num=a;
    }
    public:
    void display()
    {
        cout<<"num = "<<num<<endl;
    }

};
class child:protected base
{
   public:
   void set(int a)
   {
    setdata(a);
   }
};
class child2:public child
{
   public:
   void show()
   {
      display();
   }
};
int main()
{
    child2 c1;
    c1.set(12);
   // c1.display(); show error becase in child display becomes protected
    c1.show();
    return 0;
}