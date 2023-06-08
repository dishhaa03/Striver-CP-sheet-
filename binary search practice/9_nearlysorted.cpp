// jo ith position pe hona chahiye....vo i-1,i,i+1th pe bhi ho sakta he

# include <bits/stdc++.h>
using namespace std;

int searchelement(vector<int>&arr, int n, int target){
    int low=0, high=n-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] == target) return mid;
        if(mid+1 <= n-1 && mid-1 >=0){
            if(arr[mid-1] == target) return mid-1;
            if(arr[mid+1] == target) return mid+1;

            if(arr[mid] > target) high = mid-2;
            else low = mid+2;
        }
        else{
            return -1;
        }
    }
    return -1;
}

int main()
{
    // 5 ----> 5 10 30 20 40 ----> 20     ans:3
    int n; cin >>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int x; cin >>x;
        arr.push_back(x);
    }
    int x; cin >>x;
    cout << searchelement(arr,n,x);
}