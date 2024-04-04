int Solution::solve(vector<int> &A) {
    int n = A.size();
    vector<int>arr;
    for(int i=0; i<n; i++){
        if(A[i]%2==0) arr.push_back(0);
        else arr.push_back(1);
    }
    vector<int>arr2;
    arr2.push_back(arr[0]);
    for(int i=1; i<n; i++){
        if(arr2[arr2.size()-1] == arr[i]) continue;
        else arr2.push_back(arr[i]);
    }
    return arr2.size();
}
