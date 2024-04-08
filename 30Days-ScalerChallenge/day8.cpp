int Solution::maxSubArray(const vector<int> &A) {
    int n =A.size();
    int ans = 0,maxi=INT_MIN;
    for(int i=0; i<n; i++){
        ans+=A[i];
        maxi = max(ans,maxi);
        if(ans<0) ans=0;
    }
    return maxi;
}
