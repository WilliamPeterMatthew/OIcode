#include<bits/stdc++.h>
using namespace std;
int n,a,b,c,d,e,jw;
int x[200],y[200],z[200];
string m;
int main()
{
    cin>>n>>m;
    memset(x,-1,sizeof(x));
    memset(y,-1,sizeof(y));
    memset(z,-1,sizeof(z));
    c=m.size();
    for(a=0;a<=c-1;a++)
    {
        if(m[a]-48>=0&&m[a]-48<=9)x[a+1]=m[a]-48;
        if(m[a]>=65)x[a+1]=m[a]-55;
    }
    for(b=1;b<=c;b++)
        if(x[b]==x[c+1-b])d++;
        if(d==c) 
        {
            cout<<"STEP="<<0;
            return 0;
        }
    for(a=1;a<=30;a++)
    {
        for (b=150;1<=b;b=b-1)
        {
            if (x[b]!=-1)
            {
                c=b;
                break;    
            }
        }
        jw=0;
        for(b=1;b<=c+1;b++)
        {
            if(b==c+1&&jw!=0) 
            {
                y[c+1]=jw;
                c++;
                break;
            }
            if(b<=c)
            {
                y[b]=x[b]+x[c+1-b]+jw;
                jw=y[b]/n;
                y[b]=y[b]%n;
            }
        }
        for(b=1;b<=c;b++)
        x[b]=y[b];
        d=0;
        for(b=1;b<=c;b++)
        {
            if(x[b]==x[c+1-b])d++;
        }
        if(d==c) 
        {
            cout<<"STEP="<<a;
            return 0;
        }

    }
    cout<<"Impossible!";
    return 0;
}