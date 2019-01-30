#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
int gcd(int a,int b)
{
    if(b==0)return a;
    else return gcd(b,a%b);
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=sqrt(m*n);i++)
    {
        if((n*m)%i==0&&gcd(i,(n*m)/i)==n)
            ans++;
    }
    cout<<ans*2<<endl;
    return 0;
}