vector<int> Solution::plusOne(vector<int> &A) {
    
    int add=1;
    int i;
    vector<int>ans;
    for(i=A.size()-1;i>=0;i--)
    {
        if(A[i]+add>9)
        {
            A[i]=0;
            ans.push_back(0);
            add=1;
            continue;
        }
        
        else 
        {
            
            A[i]++;
            ans.push_back(A[i]);
            add=0;
            break;
        }
    }
    
    if(i>0)
    {
        for(int j=i-1;j>=0;j--)
        ans.push_back(A[j]);
    }
    
    if(add==1)
    ans.push_back(1);
    
    for(i=ans.size()-1;i>=0;i--)
    {
        if(ans[i]==0)
        ans.pop_back();
        
        else
        break;
    }
    
    reverse(ans.begin(),ans.end());
    
    
    return ans;
}
