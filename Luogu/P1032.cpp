#include<bits/stdc++.h>
using namespace std;
string a,b;
int cnt;
struct node 
{
    int num;
    string s;
    node(int num,string s):num(num),s(s){}
};
vector<pair<string,string> >v;
set<string>reapr;
bool bfs()
{
    queue<node>q;
    q.push(node(0,a));
    while(!q.empty())
    {
        node u=q.front();
        q.pop();
        if(u.num>10)
        {
            return 0;
        }
        for(int i=0;i<v.size();i++)
        {
            if(~u.s.find(v[i].first))
            {
                for(int j=u.s.find(v[i].first);j<u.s.length();j=u.s.find(v[i].first,j+1))
                {
                    string t=u.s;
                    t.replace(j,v[i].first.length(),v[i].second);
                    if(t==b)
                    {
                        printf("%d\n",u.num+1);
                        return 1;
                    }
                    if(!reapr.count(t))
                    {
                        q.push(node(u.num+1,t));
                        reapr.insert(t);
                    }
                }
            }
        }
    }
    return 0;
}
int main()
{
    cin>>a>>b;
    string A,B;
    while(cin>>A>>B)
    {
        v.push_back(make_pair(A,B));
    }
    if(!bfs())printf("NO ANSWER!\n");
    return 0;
}