#include<bits/stdc++.h> 
using namespace std;
int cnt;
struct love
{
    char v;int g,sx;
}kur[101];
bool cmp(love a,love b){return a.g<b.g;}
int main()
{
    
    int n;
	cin>>n;
	string z;
	int l,d;
	char s[101];
    if(n==4||n==5)
    {
        cout<<"ERROR!";
		return 0;
    }
    for(int i=1;i<=n;i++)
    {
		for(int j=1;j<=n;j++)
		{
			cin>>z;
			l=z.length();
			d=z[0];
			if(j==1)s[i]=d;
			if(l==1)kur[d].v=d,kur[d].g++;
			else continue;
		}
    }
    for(int i=2;i<=n;i++)
    {
        cout<<kur[s[i]].v<<'='<<kur[s[i]].g-3<<" ";
    }
    cout<<endl<<n-1;
    return 0;
}