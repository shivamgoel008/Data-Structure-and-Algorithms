string Solution::convertToTitle(int n) {
    
    string ans;
        
        while(n>0){
            int num=(n-1)%26;
            char ch='A'+num;
            ans.push_back(ch);
            n=(n-1)/26;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
}
