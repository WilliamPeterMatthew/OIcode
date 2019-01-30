#include<bits/stdc++.h>
using namespace std;
int a[30],b[30],n,m,we=0,v=0,g[30],ge=1;
bool is_prime(int num)
{
    int s=sqrt(double(num));
    for(int i=2;i<=s;i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}
void dfs(int x,int y)
{
    if(y==0)
    {
        if(is_prime(v))
        {
            we++;
        }
        return ;
    }
    else
    {
        for(int i=0;i<x;i++)
        {
            if(b[i]==0)
            {
                b[i]=1;
                v+=a[i];
                dfs(x,y-1);
                b[i]=0;
                v-=a[i];
            }
        }
    }    
}
int main()
{    
    for(int i=1;i<21;i++)
    {
        ge*=i;
        g[i]=ge;
    }
    scanf("%ld %ld",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    dfs(n,m);
    printf("%ld",we/g[m]);
    return 0;
}