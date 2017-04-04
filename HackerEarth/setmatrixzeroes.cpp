void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> r;
    vector<int> c;
    int m=A.size(),n=A[0].size(),i,j;
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    if(A[i][j]==0)
    {
    r.push_back(i);c.push_back(j);    
    }
    }
    }
    for(i=0;i<r.size();i++)
    {
    for(j=0;j<n;j++)
    A[r[i]][j]=0;
    }
    for(i=0;i<c.size();i++)
    {
    for(j=0;j<m;j++)
    A[j][c[i]]=0;
    }
    
}
void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int m=A.size(),n=A[0].size(),i,j,r=1,c=1;
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    if(A[i][j]==0)
    {
    A[i][0]=2;
    A[0][j]=2;
    if(i==0)
    r=0;
    if(j==0)
    c=0;
    }
    }
    }
    for(i=0;i<m;i++)
    {
    if(A[i][0]==2)
    {
    if(i || r==0)
    {for(j=0;j<n;j++)
    {
    if(A[i][j]==1)
    A[i][j]=0;
    }
    }
    }
    }
   // printf("A[0][0] is %d",A[0][0]);
    for(i=0;i<n;i++)
    {
    if(A[0][i]==2)
    {
    if(j || c==0)
    {for(j=0;j<m;j++)
    {
    if(A[j][i]==1)
    A[j][i]=0;
    }
    }
    }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        if(A[i][j]==2)
        A[i][j]=0;
        }
    }
    
    
    
}

