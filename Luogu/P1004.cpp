#include<bits/stdc++.h>
using namespace std;
int n,x,y,w,a[10][10],f[10][10][10][10];
int main()
{
    scanf("%d",&n);
    while(scanf("%d%d%d",&x,&y,&w)&&(x!=0||y!=0||w!=0))
    {
        a[x][y]=w;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                for(int l=1;l<=n;l++)
                {
                    f[i][j][k][l]=max(f[i-1][j][k-1][l],max(f[i][j-1][k-1][l],max(f[i-1][j][k][l-1],f[i][j-1][k][l-1])))+a[i][j]+a[k][l];
                    if(i==k&&j==l)f[i][j][k][l]-=a[i][j];
                }
            }
        }
    }
    printf("%d\n",f[n][n][n][n]);
}