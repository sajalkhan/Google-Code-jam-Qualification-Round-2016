#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t,n,test=1;
    scanf("%d",&t);
    while(t--)
    {
        set<int>s;
        scanf("%d",&n);
        if(!n)printf("Case #%d: INSOMNIA\n",test++);
        else
        {
            int m;
            for(int i=1; ;i++)
            {
                m=n*i;
                while(m)
                {
                    s.insert(m%10);
                    m/=10;
                }
                if(s.size()==10)
                {
                    printf("Case #%d: %d\n",test++,n*i);
                    break;
                }
            }
        }
    }
    return 0;
}
