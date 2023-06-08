# include <bits/stdc++.h>
using namespace std;

int peakelement (vector<int>&arr, int n){
    int low = 0, high = n-1;
    if(arr[0] > arr[1]) return 0;
    if(arr[n-1] > arr[n-2]) return n-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] > arr[(n+mid-1)%n] && arr[mid] > arr[(mid+1)%n]){
            return mid;
        }
        else if(arr[mid] > arr[(n+mid-1)%n]){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return -1;
}

int main()
{
    // eg : 9 ----> 5 10 20 30 15 20 30 15 5   ans : 6 (3 is also peak)
    int n; cin >>n;
    vector <int> arr;
    for(int i=0; i<n; i++){
        int x; cin >>x;
        arr.push_back(x);
    }
    cout << peakelement(arr, n);
}