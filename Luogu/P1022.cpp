#include<bits/stdc++.h>
using namespace std;
int main()
{
    int u,len=0;
    float changshu=0.0,unknow1=0.0;
    char unknow2,k;
    bool x=false;
    string s,q="+";
    cin>>s;
    q=q+s;
    while(q[len]=='+'||q[len]=='-'||q[len]=='='||(q[len]<='9'&&q[len]>='0')||(q[len]>='a'&&q[len]<='z'))
    {
        len++;
    }
    for(int i=0;i<=len;++i)
    {
        if(q[i]=='=') 
        {
            u=i;
            if(q[i+1]!='-') q[i]='+';
            break;
        }
        if(q[i]=='+'||q[i]=='-')
        {
            k=q[i];
            int sum=0;
            while(q[i+1]>='0'&&q[i+1]<='9')
            {
                if(k=='+')
                {
                    sum=sum*10+(int(q[i+1])-48);
                    i++;
                }
                if(k=='-')
                {
                    sum=sum*10-(int(q[i+1])-48);
                    i++;
                }
            }
            if(q[i+1]>='a'&&q[i+1]<='z') 
            {
                if(sum==0) unknow1-=1;
                unknow1=unknow1-sum;
                unknow2=q[i+1];
                i++;
            }
            else changshu=changshu+sum;
        }
    }
    for(int i=u;i<=len;++i)
    {
        if(q[i]=='+'||q[i]=='-')
        {
            k=q[i];
            int sum=0;
            while(q[i+1]>='0'&&q[i+1]<='9')
            {
                if(k=='+')
                {
                    sum=sum*10+(int(q[i+1])-48);
                    i++;
                }
                if(k=='-')
                {
                    sum=sum*10-(int(q[i+1])-48);
                    i++;
                }
            }
            if(q[i+1]>='a'&&q[i+1]<='z') 
            {
                if(sum==0) unknow1+=1;
                unknow1=unknow1+sum;
                unknow2=q[i+1];
                i++;		
            }
            else changshu=changshu-sum;
        }
    }
    if(unknow1!=0)
    {
        cout<<unknow2<<'=';
        if (changshu/unknow1>-0.0005 && changshu/unknow1<=0){int result=0;
        printf("%.3f",result);}
        else 
            printf("%.3f",changshu/unknow1);
    }
    else
    {
        cout<<unknow2<<'=';
        if (changshu>-0.0005 && changshu<=0){int result=0;
        printf("%.3f",result);}
        else 
            printf("%.3f",changshu);
    }
} 