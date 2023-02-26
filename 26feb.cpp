class Solution {
public:
    int minDistance(string word1, string word2) {
     int m1=word1.length();
     int m2=word2.length();
     int i=0,j=0;
     vector<vector<int>>dp(m1+1,vector<int>(m2+1,-1));
     for(i=0;i<=m1;i++)
     {
         for(j=0;j<=m2;j++)
         {
             if(i==0)
             dp[i][j]=j;
             else
             dp[i][j]=i;
         }
     }
     for(i=1;i<=m1;i++)
     {
         for(j=1;j<=m2;j++)
         {
             if(word1[i-1]==word2[j-1])
             {
                 dp[i][j]=dp[i-1][j-1];
             }
             else
             {
                 dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
             }
         }
     }
      return dp[m1][m2];
    }
};
