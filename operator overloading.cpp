#include<iostream>
using namespace std;
class complex
{
public:
double real,image;
complex(double real=0,double image=0)
complex operator+(const omplex)const;


};
complex::complex(double r, double i)
{
real=r;
image=i;
};
int main()
{
    complex x(4,4);
    complex y(6,6);
    complex z=x+y;
    cout<<z.real<<" "<<z.image;
      6
}
