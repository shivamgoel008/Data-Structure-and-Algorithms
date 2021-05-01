int Solution::trailingZeroes(int n) {
    vector<int>ten;
        int cnt2=0,cnt5=0,zero=0;
        
        for(int i=1;i<=n;i++){
            int k=i;
            if(k%10==0){
                while(k%10==0){
                    zero++;
                    k=k/10;
                }
            }
            if(k%2==0){
                // cout<<i<<" ";
                while(k%2==0){
                    cnt2++;
                    k=k/2;
                }
            }
            
            if(k%5==0){
                // cout<<i<<" ";
                // int k=i;
                while(k%5==0){
                    cnt5++;
                    k=k/5;
                }
            }
        }
        // cout<<endl;
        
        // cout<<cnt2<<" "<<cnt5<<endl;
    
        
        // cout<<zero<<endl;
        // cout<<endl;
        return zero+min(cnt2,cnt5);
}