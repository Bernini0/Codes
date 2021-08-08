#include <bits/stdc++.h>
using namespace std;
int area(int x1, int y1,int x2,int y2,int x3,int y3){
    return x1*y2+x2*y3+x3*y1-x1*y3-x3*y2-x2*y1;
}
bool getarea(int x1, int y1,int x2,int y2,int x3,int y3,int x4,int y4){
    int area1 = area(x1,y1,x2,y2,x3,y3);
    int area2 = area(x1,y1,x4,y4,x3,y3);
    int area3 = area(x2,y2,x1,y1,x4,y4);
    int area4 = area(x2,y2,x3,y3,x4,y4);
    if(area1*area2 <0 && area3 * area4 <0) return true;
    else if(area1==0 && (x2-x1)*(x2-x3)<=0 && (y2-y1)*(y2-y3)<=0) return true;
    else if(area2==0 && (x4-x1)*(x4-x3)<=0 && (y4-y1)*(y4-y3)<=0) return true;
    else if(area3==0 && (x1-x2)*(x1-x4)<=0 &&(y1-y2)*(y1-y4)<=0) return true;
    else if(area4==0 && (x3-x2)*(x3-x4) <= 0 &&(y3-y2)*(y3-y4)<= 0) return true;
    else return false;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x5,y5,x6,y6,x1,y1,x3,y3;
        cin >> x5>>y5 >> x6 >>y6 >> x1 >>y1 >> x3 >>y3;
        if(x1>x3) swap(x1,x3);
        if(y3>y1) swap(y1,y3);

        int x2 = x1;
        int x4 = x3;
        int y2 = y3;
        int y4 = y1; 
        bool did = false;

        if(getarea(x1,y1,x5,y5,x2,y2,x6,y6))did =true;
        else if(getarea(x2,y2,x5,y5,x3,y3,x6,y6)) did = true;
        else if(getarea(x3,y3,x5,y5,x4,y4,x6,y6)) did = true;
        else if(getarea(x4,y4,x5,y5,x1,y1,x6,y6)) did = true;
        else if(x5>=x1 && x5<=x3 && x6>=x1 && x6<=x3 && y5>=y3 && y5<=y1 && y6>=y3 && y6<=y1) did =true;
        

        if(did){
            printf("T\n");
        }
        else
        {
            printf("F\n");
        }
        
        
        
    }
    
}