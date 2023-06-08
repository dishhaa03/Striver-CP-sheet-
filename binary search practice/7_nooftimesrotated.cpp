
# include <bits/stdc++.h>
using namespace std;

int indexofminelement(vector<int>&arr, int n){
    int low=0, high=n-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid-1] > arr[mid] && arr[mid] < arr[mid+1]){
            return mid;
        }
        if(arr[mid] > arr[0]) low = mid+1;
        else high = mid-1;
    }
    return -1;
}

int main()
{
    int n; cin >>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int x; cin >>x;
        arr.push_back(x);
    }
    cout << indexofminelement(arr,n);
    
    return 0;

}

















