vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    queue<int>q1,q2;
    int n=A.size(),i=0,m,j,x;
    vector<int>ans;
    m=INT_MIN;
    for(i=0;i<B;i++)
    {
    m=max(m,A[i]);
    q1.push(A[i]);
    }
    ans.push_back(m);
    for(i=B;i<n;i++)
    {
    q1.pop();
    q1.push(A[i]);m=INT_MIN;
    while(!q1.empty())
    {
     x=q1.front();
     q1.pop();
     m=max(m,x);
     q2.push(x);
    }
    swap(q1,q2);
    ans.push_back(m);
    }
    return ans;
}
