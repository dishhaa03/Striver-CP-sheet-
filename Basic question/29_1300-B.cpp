# include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >>t;
    while(t--){
        int n1; cin >>n1;
        int n = 2*n1;
        int arr[n];
        for(int i=0; i<n; i++) cin >>arr[i];
        sort(arr, arr+n, greater<int>());
        cout << arr[n1-1] - arr[n1] << endl;
    }
}