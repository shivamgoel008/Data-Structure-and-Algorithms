bool compare(string a,string b)
    {
        string ab=a.append(b);
        string ba=b.append(a);
        
        return ab>ba;
    }

string Solution::largestNumber(const vector<int> &A) {
    
    int i,j;
    
    vector<string>s;
    
    for(auto i:A)
    {
        s.push_back(to_string(i));
    }
    sort(s.begin(),s.end(),compare);

    string ans;
    
    for(auto i:s)
    {
        for(auto j:i)
        ans.push_back(j);
    }
    
    return ans;
    
}
