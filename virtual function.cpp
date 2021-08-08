#include<iostream>
using namespace std;
class base
{
public:
virtual void vfunc()
{
    cout<<"this is base's vfunc"<<endl;
}
};
class derived1:public base
{
    public:
    void vfunc()
    {
      cout<<"this is derived1's vfunc"<<endl;
    }

};
class derived2:public base
{
public:
void vfunc()
{
    cout<<"this is derived2's vfunc"<<endl; 
}
};
int main()
{
    base *p,b;
    derived1 d1;
    derived2 d2;
    p=&b;
    p->vfunc();
    p=&d1;
    p->vfunc();
    p=&d2;
    p->vfunc();
    return 0;

}
