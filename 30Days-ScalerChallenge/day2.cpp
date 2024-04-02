int Solution::solve(vector<int> &A) {
    int maxi = *max_element(A.begin(), A.end());
    int mini = *min_element(A.begin(), A.end());
    int count = 0;
    for(int i=0; i<A.size(); i++){
        if(A[i] > mini && A[i] < maxi) count++;
    }
    return count;
}
