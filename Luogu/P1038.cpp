#include<bits/stdc++.h>
using namespace std;
int n,p,cnt,head[30005],c[105],u[105],in[105],out[105];
bool vis[105];
struct sjwl
{
    int ne,to,w;
}a[30005];
void add(int x,int y,int w)
{
    a[++cnt]=(sjwl){head[x],y,w};head[x]=cnt;in[y]++;out[x]++;
}
queue<int>q;
struct gay
{
    int x;
    friend bool operator<(gay a,gay b)
    {
        return a.x>b.x;
    }
};
priority_queue<gay>ans;
int main()
{
    scanf("%d%d",&n,&p);
    for(int i=1;i<=n;i++)
        scanf("%d%d",&c[i],&u[i]);
    for(int i=1,x,y,w;i<=p;i++)
    {
        scanf("%d%d%d",&x,&y,&w);
        add(x,y,w);
    }
    for(int i=1;i<=n;i++)
    {
        if(c[i])
        {
            q.push(i);
            vis[i]=1;
        }
        else
            c[i]-=u[i];
    }
    while(!q.empty())
    {
        int x=q.front();q.pop();
        vis[x]=0;
        if(c[x]<0)continue;
        for(int i=head[x];i;i=a[i].ne)
        {
            int y=a[i].to,w=a[i].w;
            c[y]+=c[x]*w;
            if(!vis[y])
            {
                q.push(y);
                vis[y]=1;
            }
        }
    }
    for(int i=1;i<=n;i++)
        if(head[i]==0&&c[i]>0)
            ans.push((gay){i});
    if(ans.empty())
    {
        printf("NULL\n");
        return 0;
    }
    while(!ans.empty())
    {
        int x=ans.top().x;ans.pop();
        printf("%d %d\n",x,c[x]);
    }
    return 0;
}