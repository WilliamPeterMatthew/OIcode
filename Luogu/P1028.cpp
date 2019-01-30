#include<bits/stdc++.h>
using namespace std;
int f[1001],n;
int main()
{
    cin>>n;
    f[1]=1;
    for(int i=2;i<=n;i++)
    {
            f[i]=f[i-1];
            if(i%2==0)
                f[i]+=f[i/2];
    }
    cout<<f[n]<<endl;
    return 0;
} 