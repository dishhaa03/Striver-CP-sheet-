vector<int> Solution::getRow(int n) {
    vector<int>ans;
    ans.push_back(1);
    int value = 1;
    for(int i=1; i<=n; i++){
        value *= (n-(i-1));
        value /= (i);
        ans.push_back(value);
    }
    return ans;
}
