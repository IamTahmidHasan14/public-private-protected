#include <iostream>
using namespace std;
class Object
{
    int a,b,*c,*d;
   public:
       Object()
       {
           a=5;
           b=7;
       }
       Object(const Object &x)
       {
           a=x.a;
           b=x.b;
       }
       void set_values()
       {
           c=&a;
           d=&b;
       }
       void change_valuse()
       {
           a=*d;
           b=*c;
       }
       void show()
       {
           cout<<"\nA= "<<a;
           cout<<"\nB= "<<b;
       }
};
int main()
{
    Object ob1, ob2;
    ob1.show();
    ob2.show();
    ob2.set_values();
    ob2.change_valuse();
    cout<<"\n\nAfter changing values";
    ob1.show();
    ob2.show();
return 0;
}
