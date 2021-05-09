class Solution {
public:
    int rotatedDigits(int N) {
        
        // good are (2,5,6,9)
        
        int i,j,k,ans=0;
        for(i=1;i<=N;i++){
            int k=i;
            int check=k;
            bool flag=true;
            bool chec=false;
            while(k>0){
                if(k%10==2 or k%10==5 or k%10==6 or k%10==9 or k%10==1 or k%10==0 or k%10==8){
                }
                
                
                else 
                    flag=false;
                
                if(k%10==2 or k%10==5 or k%10==6 or k%10==9)
                    chec=true;
                k=k/10;
            }
            
            if(flag==true and chec==true)
                cout<<check<<endl,ans++;
            
            
        }
        return ans;
    }
};