# include <bits/stdc++.h>
using namespace std;

int binarySearch (vector <int>& arr, int n, int key, int s, int e){
    int start = s, end=e;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] > key){
            end = mid-1;
        }
        if(arr[mid] < key){
            start = mid+1;
        }
    }
    return -1;
}

int pivotelement(vector<int>&arr, int n){
    int low=0, high = n-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[(n+mid-1)%n] > arr[mid] && arr[mid] < arr[(mid+1)%n]) return mid;
        else if(arr[mid] > arr[0]) low = mid+1;
        else high = mid;
    }
    return -1;
}

int search(vector<int>&arr, int n, int key){
    int pivot = pivotelement(arr,n);
    cout << "pivot : " << pivot << endl;
    return max(binarySearch(arr,n,key,0,pivot-1), binarySearch(arr,n,key, pivot, n-1));
}

int main()
{
    // eg : 5----> 8 10 13 2 4  ----> 13  ans:2
    int n; cin >>n;
    vector <int> arr;
    for(int i=0; i<n; i++){
        int x; cin >>x;
        arr.push_back(x);
    }
    int x; cin >>x;
    cout << search(arr,n,x);

    return 0;
}