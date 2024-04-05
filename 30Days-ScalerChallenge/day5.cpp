int Solution::maxProfit(const vector<int> &arr) {
    int n = arr.size();
    if(n==0 || n==1) return 0;
    int buy = arr[0], result = 0;
    for(int i=0; i<n; i++){
        if(arr[i] < buy){
            buy = arr[i];
        }
        result = max(result,arr[i]-buy);
    }
    return result;
}
