#include<bits/stdc++.h>
using namespace std;
int t,m;
int f[1005],o[105],n[105];

int main()
{
    cin>>t>>m;
    for(int i=1;i<=m;i++)
    {
        scanf("%d%d",&o[i],&n[i]);
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=t;j>=o[i];j--)
        {
            f[j]=max(f[j],f[j-o[i]]+n[i]);
        }
    }
    cout<<f[t]<<endl;
    return 0;
}