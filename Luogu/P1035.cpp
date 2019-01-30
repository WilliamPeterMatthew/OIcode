#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n=1;
    cin>>k;
    double s=1.000000;
    for(n=2;s<=k;n++)
    {
        s+=1.000000/n;
//		cout<<t<<" "<<s<<" "<<n<<endl;
    }
    cout<<n-1<<endl;
    return 0;
}