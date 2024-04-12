vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    int xr = 0;
    for(int i=0; i<n; i++){
        xr = xr^(i+1);
        xr = xr^A[i];
    }
    int no = (xr & ~(xr-1));
    int gr1 = 0, gr2=0;
    for(int i=0; i<n; i++){
        if((A[i]&no)!=0) gr2 = gr2^A[i];
        else gr1 = gr1^A[i];
    }
    for(int i=1; i<=n; i++){
        if((i&no)!=0) gr2 = gr2^i;
        else gr1 = gr1^i;
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(A[i] == gr1) cnt++;
    }
    if(cnt == 2) return {gr1,gr2};
    return {gr2,gr1};
}
