// This is mountain array question.....task is to find the maximum element....
// Note : my code not working if the first element is the peak element

# include <bits/stdc++.h>
using namespace std;

int peakelement(vector<int>&arr, int n){
    int low = 0, high = n-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            return arr[mid];
        }
        else if(arr[mid] < arr[mid+1]){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return -1;
}

int main()
{
    // eg : 6 ---> 1 3 5 15 4 2  ans : 15
    int n; cin >>n;
    vector <int> arr;
    for(int i=0; i<n; i++){
        int x; cin >>x;
        arr.push_back(x);
    }
    cout << peakelement(arr,n) <<endl;
}