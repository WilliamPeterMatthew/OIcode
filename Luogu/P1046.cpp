#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,s,k;
    int a[10];
    s=0;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    for(i=0;i<10;i++)
    {
        if(k+30>=a[i])
        {
            s+=1;
        }
    }
    cout<<s<<endl;
    return 0;
}