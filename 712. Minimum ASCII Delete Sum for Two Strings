class Solution {
public:
    int dp[1001][1001];
    int fun(string &s1,string &s2,int i,int j,int n,int m)
    {  
        if(i==n)
        {
            int s=0;
            for(int k=j;k<m;k++)
            {
                s+=int(s2[k]);
            }
            return s;
        }
        if(j==m)
        {
            int s=0;
            for(int k=i;k<n;k++)
            {
                s+=int(s1[k]);
            }
            return s;

        }
        if(dp[i][j]!=-1) return dp[i][j];
        int p=1e9;
        int ne=1e9;
        int np=1e9;
        if(s1[i]!=s2[j])
        {
            p=int(s1[i])+fun(s1,s2,i+1,j,n,m);
            ne=int(s2[j])+fun(s1,s2,i,j+1,n,m);
        }
        else
        {
           np=fun(s1,s2,i+1,j+1,n,m);
        }
        return dp[i][j]=min(p,min(ne,np));

        
    }
    int minimumDeleteSum(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        memset(dp,-1,sizeof(dp));
        return fun(s1,s2,0,0,n,m);
    }
};
