int Solution::cntBits(vector<int> &A) {
    int n=A.size(),i,j;
    int ans=0,sum,x;
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    sum=0;
    x=A[i]^A[j];
    //printf("%d %d ",A[i],A[j]);
    while(x)
    {
    sum+=(x&1);
    x=x>>1;
    }
    //printf("%d ",sum);
    ans=(ans+sum)%(1000000007);
    }
    }
    return ans;
}
