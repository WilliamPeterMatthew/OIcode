#include<bits/stdc++.h>
using namespace std;
const int maxn=10000;
int n;
int a[maxn],b[maxn],g[maxn],h[maxn];
int main()
{
    scanf("%d",&n);
    for(int k=1;k<=n;k++)
    {
        scanf("%d%d%d%d",&a[k],&b[k],&g[k],&h[k]);
    }
    int x,y,ans=-1;
    scanf("%d%d",&x,&y);
    for(int k=1;k<=n;k++)
    {
        if(a[k]<=x&&a[k]+g[k]>=x&&b[k]<=y&&b[k]+h[k]>=y)
            ans=k;
    }
    printf("%d\n",ans);
    return 0;
}