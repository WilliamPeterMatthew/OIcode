#include<iostream>
#include<cstdio>
using namespace std;
int n,i;
int fz,fm,he,tmp=1;
int main()
{
    cin>>n;
    for(i=1;tmp<n;tmp+=i+1,i+=1);
    he=i+1;
    tmp-=i;
    if(he%2==1)
    {
        fz=1;
        fm=he-1;
        for(i=tmp+1;i<n;i++)
        {
            fz++;
            fm--;
        }
    }
    else
    {
        fm=1;
        fz=he-1;
        for(i=tmp+1;i<n;i++)
        {
            fz--;
            fm++;
        }
    }
    printf("%d/%d\n",fz,fm);
}