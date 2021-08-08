#include<iostream>
using namespace std;
class base
{
protected:
int i;
public:
base(int n)
{
    i=n;
    cout<<"constucting base\n"<<endl;

}
~base()
{
    cout<<"destructing base\n"<<endl;
}
};
class derived:public base
{
    int j;
    public:
    derived(int x, int y):base(y)
    {
        j=x;
        cout<<"constructing derived\n";
    }
    ~derived()
    {
        cout<<"destructing derived\n";
    }
    void show()
    {
        cout<<i<<" "<<j<<"\n";
    }
};
int main()
{
    derived ob(3,4);
    ob.show();
    return 0;
}