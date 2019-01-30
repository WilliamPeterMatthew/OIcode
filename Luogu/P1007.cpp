#include<bits/stdc++.h>
using namespace std;
int n,l,p,maxv,minv;
int main()
{
    scanf("%d%d",&l,&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&p);
        maxv=max(maxv,max(l-p+1,p));
        minv=max(minv,min(l-p+1,p));
    }
    printf("%d %d\n",minv,maxv);
    return 0;
}