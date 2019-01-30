#include<bits/stdc++.h>
using namespace std;
int a,n,m,x;
int f[25],fs[25],fx[25];
int main()
{
    scanf("%d%d%d%d",&a,&n,&m,&x);
    f[1]=a;fs[1]=a;
    f[n]=0;fx[n]=m;
    for(int t=0;t<=2000;t++)
    {
        f[2]=a;fs[2]=t;fx[2]=t;
        for(int i=3;i<n;i++)
        {
            fs[i]=fs[i-1]+fs[i-2];
            fx[i]=fs[i-1];
            f[i]=f[i-1]+fs[i]-fx[i];
        }
        if(f[n-1]==m)break;
    }
    printf("%d\n",f[x]);
}