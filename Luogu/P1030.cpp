#include<bits/stdc++.h>
using namespace std;
void qian(string in,string after)
{
    if(in.size()>0)
    {
        char ch=after[after.size()-1];
        cout<<ch;
        int k=in.find(ch);
        qian(in.substr(0,k),after.substr(0,k));
        qian(in.substr(k+1),after.substr(k,in.size()-k-1));
    }
}
int main()
{
    string inord,aftord;
    cin>>inord;
    cin>>aftord;
    qian(inord,aftord);
    cout<<endl;
    return 0;
}