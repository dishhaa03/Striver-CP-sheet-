# include <bits/stdc++.h>
using namespace std;

int floorelement(vector<int>&arr, int n, int key){
    int low=0, high=n-1;
    int ans = -1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] == key) return arr[mid];
        if(arr[mid] > key){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return arr[high];
}

int main()
{
    // eg : 6-----> 1 2 4 8 10 10--->9    ans:8
    int n; cin >>n;
    vector<int>arr;
    for(int i=0; i<n; i++){
        int x; cin >>x;
        arr.push_back(x);
    }
    int x; cin >>x;
    cout << floorelement(arr,n,x)<<endl;
}