#include<bits/stdc++.h>
using namespace std;
int n,m;
__int128 a[105][105],ans=0,f[105][105];
template<typename __Type_of_scan>
void scan(__Type_of_scan &x)
{
    int f=1;x=0;char s=getchar();
    while(s<'0'||s>'9'){if(s=='-')f=-1;s=getchar();}
    while(s>='0'&&s<='9'){x=x*10+s-'0';s=getchar();}
    x*=f;
}
template<typename __Type_of_print>
void print(__Type_of_print x)
{
    if(x<0){putchar('-');x=-x;}
    if(x>9)print(x/10);
    putchar(x%10+'0');
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scan(a[i][j]);
    for(int i=1;i<=n;i++)
    {
        memset(f,0,sizeof(f));
        for(int len=0;len<=m;++len)
            for(int j=1;j+len<=m;++j)
                f[j][j+len]=max(2*f[j+1][j+len]+2*a[i][j],2*f[j][j+len-1]+2*a[i][j+len]);
        ans+=f[1][m];
    }
    print(ans);
    return 0;
}