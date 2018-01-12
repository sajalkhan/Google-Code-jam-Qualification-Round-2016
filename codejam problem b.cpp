#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,test=1;
    string s;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        cin>>s;
        int count=0,p=0,m=0,x;
        int ln=s.size();
        while(p!=ln)
        {
            for(int i=0;i<ln;i++)
            {
                if(s[i]=='+')p++;
                else
                {
                    x=i;
                    m++;
                }
            }
            if(m)
            {
                p=0;
                m=0;
                if(x==ln-1)
                {
                    for(int i=0;i<ln;i++)
                    {
                        if(s[i]=='+')s[i]='-';
                        else s[i]='+';
                    }
                }
                else
                {
                    for(int i=0;i<=x;i++)
                    {
                        if(s[i]=='+')s[i]='-';
                        else s[i]='+';
                    }
                }
            }
            count++;
        }
        printf("Case #%d: %d\n",test++,count-1);
    }
    return 0;
}
