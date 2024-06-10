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
class child:private base
{
   public:
   void set(int a)
   {
    setdata(a);
   }
   void disp()
   {
    display();
   }
};
class child2:public child
{
   public:
   void show()
   {
      //display(); // display becomes private in child class so its not inherite in child2 class
      disp();
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