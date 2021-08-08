#include<iostream>
using namespace std;
class base
{
public:
int i;
};
class d1:virtual public base
{
    public:
    int j;

};
class d2:virtual public base
{
public:
int k;
};
class d3: public d1, public d2
{

};
void main()
{
    d3 ob;
    ob.i=10;
    ob.j=20;
    ob.k=30;
    ob.d1::i=100;
    ob.d2::i=200;

}