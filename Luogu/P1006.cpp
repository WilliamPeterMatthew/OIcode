#include<bits/stdc++.h>
using namespace std;
int f[57][57][57][57],a[57][57];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			scanf("%d",&a[i][j]);
    for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			for(int k=1;k<=n;k++)
				for(int l=1;l<=m;l++)
				{
					int temp1=max(f[i-1][j][k-1][l],f[i-1][j][k][l-1]);
					int temp2=max(f[i][j-1][k-1][l],f[i][j-1][k][l-1]);
					f[i][j][k][l]=max(temp1,temp2)+a[i][j]+a[k][l];
					if(i==k&&j==l)f[i][j][k][l]-=a[i][j];
				}
    printf("%d",f[n][m][n][m]);
    return 0;
} 