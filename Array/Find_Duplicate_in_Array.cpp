int Solution::repeatedNumber(const vector<int> &A) {
    
    long long int sum=0;
    
    for(long long int i=0;i<A.size();i++)
    sum+=A[i];
    
    
    long long int size=A.size()-1;
    
    
    return sum-size*(size+1)/2;
}
