#include<iostream>
using namespace std;
class twovalues
{
int a,b;
public:
twovalues(int a, int b)
{
a=i;
b=j;
}
friend class min;

};
class min(towvalues x )
{
public:
int min(twovalues x);

};
int min::min(twovalues x)
{
return x.a<x.b?x.a:x.b;


}
int main()
{
    twovalues ob(10,20);
    min m;
    cout<<m.min(ob);
    return 0;
}
