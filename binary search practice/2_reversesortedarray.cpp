# include <bits/stdc++.h>
using namespace std;

// Returns the index of the key to be found else -1
int binarySearch (vector <int>& arr, int n, int key){
    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            end = mid-1;
        }
        if(arr[mid] > key){
            start = mid+1;
        }
    }
    return -1;
}

int main()
{
    //eg: 5 --> 5 4 2 1 0    ans:1
    int n; cin >>n;
    vector <int> arr;
    for(int i=0; i<n; i++){
        int x; cin >>x;
        arr.push_back(x);
    }
    cout << binarySearch(arr, n, 4) << endl;
}