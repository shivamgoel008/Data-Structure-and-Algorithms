int Solution::solve(int A, vector<int> &B) {
    
    int sum=0,accu=0,cnt=0,i,j;
    for(i=0;i<A;i++)
    sum+=B[i];
    
    for(i=0;i<A;i++)
    {
        accu+=B[i];
        if(sum-accu==2*accu)
        {
            int check=0;
            for(j=i+1;j<A-1;j++)
            {
                check+=B[j];
                if(check==accu)
                cnt++;
            }
        }
    
    }
    return cnt;
}
