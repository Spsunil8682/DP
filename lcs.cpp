int solve(string &s1,string &s2,int n,int m,vector<vector<int>>&dp){
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0||j==0)dp[i][j]=0;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][n];
    }
    int lcs(string str,string str1){
    
    
    int n=str.size();
    int m=str1.size();
    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    int lcs=solve(str,str1,n,m,dp);
    return lcs;
    }