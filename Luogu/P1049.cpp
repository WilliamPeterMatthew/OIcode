#include<bits/stdc++.h>
using namespace std;
const int maxn=20005;
int n,v[maxn],V,f[maxn];
int main()
{
    cin>>V;
    cin>>n;
    for(int i=1,x;i<=n;i++)
    {
        scanf("%d",&v[i]);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=V;j>=v[i];j--)
        {
            if(f[j]<f[j-v[i]]+v[i])
            {
                f[j]=f[j-v[i]]+v[i];
            }
        }
    }
    cout<<V-f[V]<<endl;
    return 0;
}