int Solution::solve(vector<int> &A) {
    int n = A.size();
    int res = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(A[i]==0 || A[j] == 0) continue;
            res = max(res, A[i]%A[j]);
        }
    }
    return res;
}
