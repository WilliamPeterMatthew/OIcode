#include<bits/stdc++.h>
using namespace std;
int n,m,hx,hy;
bool c[25][25];
long long f[25][25];
int main()
{
    cin>>n>>m>>hx>>hy;
    f[0][0]=1;
    c[hx][hy]=1;
    if(hx-1>=0&&hy-2>=0)c[hx-1][hy-2]=1;
    if(hx-1>=0&&hy+2<=m)c[hx-1][hy+2]=1;
    if(hx+1<=n&&hy-2>=0)c[hx+1][hy-2]=1;
    if(hx+1<=n&&hy+2<=m)c[hx+1][hy+2]=1;
    if(hx-2>=0&&hy-1>=0)c[hx-2][hy-1]=1;
    if(hx-2>=0&&hy+1<=m)c[hx-2][hy+1]=1;
    if(hx+2<=n&&hy-1>=0)c[hx+2][hy-1]=1;
    if(hx+2<=n&&hy+1<=m)c[hx+2][hy+1]=1;
    for(int x=0;x<=n;x++)
    {
        for(int y=0;y<=m;y++)
        {
            if(c[x][y]==false)
            {
            	if(x==0&&y-1>=0)
                    f[x][y]=f[x][y-1];
                else if(x-1>=0&&y==0)
                    f[x][y]=f[x-1][y];
                else if(x-1>=0&&y-1>=0)
               		f[x][y]=f[x-1][y]+f[x][y-1];
            }
        }
    }
    cout<<f[n][m]<<endl;
} 