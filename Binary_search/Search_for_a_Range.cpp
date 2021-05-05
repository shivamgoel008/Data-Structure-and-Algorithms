vector<int> Solution::searchRange(const vector<int> &v, int key) {
      
        
        int first,second,n;
        n=v.size();
        
               vector<int>ans;
        
        if(v.size()==0){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        

        int lower=-1;

        first=0;
        second=n-1;

        while(first<=second)
        {
            int mid=(first+second)/2;

            if(v[mid]==key and mid>=0)
            {
                lower=mid;
                second=mid-1;
            }

            else if(v[mid]<key)
            first=mid+1;

            else if(v[mid]>key)
            second=mid-1;
        }

        int upper=-1;
        first=0;
        second=n-1;


        while(first<=second)
        {
            int mid=(first+second)/2;

            if(v[mid]==key and mid>=0)
            {
                upper=mid;
                first=mid+1;
            }

            else if(v[mid]<key)
            first=mid+1;

            else if(v[mid]>key)
            second=mid-1;
        }

        // cout<<lower<<" "<<upper<<endl;

        ans.push_back(lower);
        ans.push_back(upper);
        
        return ans;

  
}
