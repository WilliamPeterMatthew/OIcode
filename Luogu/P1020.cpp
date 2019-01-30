#include<bits/stdc++.h>
using namespace std;
const int N=100050;
int n,d[N],ne[N],num=0,he[N];
void an1()
{
    int ans=0,l,m,r;
    he[ans]=50000;
    for(int i=1;i<=num;i++)
    {
        if(he[ans]>=d[i])
        {
            he[++ans]=d[i];
        }
        else
        {
            l=0,r=ans;
            while(l<r)
            {
                m=(l+r)/2;
                if(he[m]>=d[i])
                    l=m+1;
                else
                    r=m;
            }
            if(l!=0)
                he[l]=d[i];
        }
    }
    cout<<ans<<endl;
}
void an2()
{
    memset(he,-1,sizeof(he));
    int ans=0,l,m,r;
    for(int i=1;i<=num;i++)
    {
        if(he[ans]<d[i])
        {
            he[++ans]=d[i];
        }
        else
        {
            l=0,r=ans;
            while(l<r)
            {
                m=(l+r)/2;
                if(he[m]>=d[i])
                    r=m;
                else
                    l=m+1;
            }
            he[l]=d[i];
        }
    }
    cout<<ans<<endl;
}
int main()
{
    while(scanf("%d",&d[++num])==1);
    num--;
    an1();
    an2();
}