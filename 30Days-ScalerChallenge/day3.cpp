# include <bits/stdc++.h>
int Solution::solve(vector<int> &A) {
    int n = A.size();
    vector<int>arr;
    for(int i=0; i<n; i++){
        if(A[i]%2 == 0) arr.push_back(0);
        else arr.push_back(1);
    }
    int total_odd = accumulate(arr.begin(), arr.end(), 0);
    int total_even = n - total_odd;
    return min(total_odd, total_even);
}