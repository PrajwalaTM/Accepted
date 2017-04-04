int Solution::jump(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size(),dp[n],j,i;
    dp[0]=0;
    for(i=1;i<n;i++)
    dp[i]=100003;
    for(i=0;i<n;i++)
    {
    for(j=i;j<=(A[i]+i);j++)
    {
    if(j<n && j!=0)
    dp[j]=min(1+dp[i],dp[j]);    
    }
    }
    if(dp[n-1]!=100003)
    return dp[n-1];
    else
    return -1;
}

