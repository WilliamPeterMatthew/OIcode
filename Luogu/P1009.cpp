#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n;
    int daan[105],a[105];
    scanf("%d",&n);
    memset(a,0,sizeof(a));
    memset(daan,0,sizeof(daan));
    a[1]=1;
    daan[1]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=100;j++)
        a[j]*=i;
        for(int j=1;j<=100;j++)
        {
            a[j+1]+=a[j]/10;
            a[j]%=10;
        }
        for(int j=1;j<=100;j++)
        daan[j]+=a[j];
    }
    for(int i=1;i<=100;i++)
    {
        daan[i+1]+=daan[i]/10;
        daan[i]%=10;
    }
    for(int i=100;i>=1;i--)
    {
        if(daan[i]!=0)
        {
            k=i;
            break;
        }
    }
    for(int i=k;i>=1;i--)
    printf("%d",daan[i]);
}