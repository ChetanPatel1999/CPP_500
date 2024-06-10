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
class child:public base
{
   public:
   void set(int a)
   {
    setdata(a);
   }
};
int main()
{
    child c1;
    c1.set(12);
    c1.display();

    return 0;
}