#include<bits/stdc++.h>
using namespace std;
bool t[10005];
int main()
{
    int L,M,sum=0;
    cin>>L>>M;
    for(int i=0;i<=L;i++)
        t[i]=true;
    for(int i=1,s,e;i<=M;i++)
    {
        cin>>s>>e;
        for(int j=s;j<=e;j++)
            t[j]=false;
    }
    for(int i=0;i<=L;i++)
    {
        if(t[i])	sum++;
    }
    cout<<sum<<endl;
    return 0;
}