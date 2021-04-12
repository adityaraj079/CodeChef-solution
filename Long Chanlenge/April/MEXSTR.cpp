#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=(int)1e6;
int dp[MAXN+2],dp1[MAXN+2];
int next0[MAXN+2],next1[MAXN+2];

void run_test_cases()
{
        string s;
        cin>>s;
        int n=s.length(); 
        int last_pos=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '0')
            {
                for(int j=last_pos+1;j<=i;j++)
                    next0[j]=i;
                    last_pos=i;
                
            }
        }
        for(int i=last_pos+1;i<n;i++)
        {
            next0[i]=n;
            
        }
        if(next0[0] == n)
        {
           cout<<"0\n";
            return ;
        }
        last_pos=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1')
            {
                for(int j=last_pos+1;j<=i;j++)
                    next1[j]=i;
                    last_pos=i;
                
            }
        }
        for(int i=last_pos+1;i<n;i++)
            next1[i]=n;
        
        
        dp[n]=dp[n+1]=0;
        dp1[n]=dp1[n+1]=0;
        for(int i=n-1;i>=0;--i)
        {
            dp[i]=dp[i+1];
            if(s[i] == '0' && next1[i] < n)
                dp[i]=max(dp[i],dp[next1[i]+1]+1);
           if(s[i] == '1' && next0[i] <n)
                dp[i]=max(dp[i],dp[next0[i]+1]+1);      
            dp1[i]=dp1[i+1];
            if(next1[i] < n)
            dp1[i]=max(dp1[i],dp[next1[i]+1]+1);
            
        }
        
        int len=dp1[0]+1;
        int curind=next1[0]+1;
        string ans="1";
        for(int i=1;i<len;++i)
        {
            if(curind >= n)
            {
                ans.push_back('0');
                continue;
            }
            if(next0[curind] >= n)
            {
                ans.push_back('0');
                curind=next0[curind]+1;
                continue;
            }
            if(dp[next0[curind]+1] <len-i-1)
            {
                ans.push_back('0');
                curind=next0[curind]+1;
            }
            else
            {
                ans.push_back('1');
                curind=next1[curind]+1;
            }
        }
        cout<<ans<<"\n";
}
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        run_test_cases();
        

    }
return 0;
}