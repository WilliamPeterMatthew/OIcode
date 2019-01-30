#include<bits/stdc++.h>
using namespace std;
double a,b,c,d;
double f(double x)
{
    return a*x*x*x+b*x*x+c*x+d;
}
void BinarySearch(double l,double r)
{
    if(r-l<=0.001)
    {
        printf("%.2lf ",l);
        return ;
    }
    double Mid=l+(r-l)/2;
    double Ans_l,Ans_r;
    Ans_l=f(l)*f(Mid);
    Ans_r=f(Mid)*f(r);
    if(f(Mid)==0)
        printf("%.2lf ",Mid);
    if(f(r)==0)
        printf("%.2lf ",r);
    if(Ans_l<0)
        BinarySearch(l,Mid);
    else if(Ans_r<0)
        BinarySearch(Mid,r);
}
int main()
{
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    for(double i=-100;i<=99;i++)
    {
        if(f(i)*f(i+1.0)<=0)
            BinarySearch(i,i + 1.0);
    }
    return 0;
}