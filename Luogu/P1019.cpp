#include<bits/stdc++.h>
using namespace std;
int n,ans;
string s[25];
int vis[25];
void link(int d,string tmp,int las)
{
    ans=max(ans,(int)tmp.length());
    if(las==n+1)
    {
        for(int i=1;i<=n;i++)
        {
            if(s[i][0]==s[las][0])
            {
                string tp=tmp+s[i];
                vis[i]++;
                link(d+1,tp,i);
                vis[i]--;
            }
        }
    }
    else
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==2)continue;
        for(int j=1;j<s[las].length();j++)
        {
            int tag=j;
            for(int k=j;k<s[las].length();k++)
            {
                if(k-j>=s[i].length()||s[i][k-j]!=s[las][k])
                {
                    tag=0;
                    break;
                }
            }
            if(tag)
            {
                string tp=tmp+s[i].substr(s[las].length()-j,s[i].length()-s[las].length()+j);
                vis[i]++;
                link(d+1,tp,i);
                vis[i]--;
            }
        }
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n+1;i++)
        cin>>s[i];
    sort(s+1,s+n+1);
    vis[n+1]=2;
    link(1,s[0],n+1);
    printf("%d\n",ans);
}