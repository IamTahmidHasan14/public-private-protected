#include <iostream>
using namespace std;
class Th
{
private:
    int *a;
public:
    Th(int x)
    {
        a=new int;
        *a=x;
    }
    Th(Th &obj)
    {
        a = new int;
        *a = *(obj.a);
    }
    void Set_values(int m)
    {
        *a=m;
    }
    void show()
    {
        cout << "Output: " << *a << endl;
    }
};
int main()
{
    Th ob1(100);
    Th ob2=ob1;
    ob1.show();
    ob2.show();
    ob2.Set_values(200);
    ob1.show();
    ob2.show();
    return 0;
}
