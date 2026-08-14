class Solution {
public:
    int tribonacci(int n) {
        if(!n) return 0;
        int dp[] = {0, 1, 1};

        for(int i = 3; i <= n; i++)
        {
            int ti = dp[0] + dp[1] + dp[2];
            dp[0] = dp[1];
            dp[1] = dp[2];
            dp[2] = ti;  
        }
        return dp[2];
        
    }
};