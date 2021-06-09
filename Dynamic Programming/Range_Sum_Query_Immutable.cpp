class NumArray {
    vector<int>dp;
public:
    
    
    NumArray(vector<int>& nums) {
        dp.push_back(0);
        int sum=0;
        for(auto i:nums)
            sum+=i,dp.push_back(sum);
    }
    
    int sumRange(int left, int right) {
        // cout<<dp[right+1]<<" "<<dp[left]<<endl;
        return dp[right+1]-dp[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */