// given a key, task to find number x for which abs(x-key) is minimum
// approch:-    minimum number will be the nearest no. to the key....which is either the ceil or the floor
# include <bits/stdc++.h>
using namespace std;

int minimumdiff (vector<int>&arr, int n, int key){
    int low =0, high = n-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] == key) return 0;
        else if(arr[mid] > key){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return min(abs(key-arr[low]), abs(key-arr[high]));
}

int main()
{
    // eg : 6 ---> 2 5 7 8 10 19 ---> 12  ans : 2
    int n; cin >>n;
    vector <int> arr;
    for(int i=0; i<n; i++){
        int x; cin >>x;
        arr.push_back(x);
    }
    int x; cin >>x;
    cout << minimumdiff(arr,n,x);
}