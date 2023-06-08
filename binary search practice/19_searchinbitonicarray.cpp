# include <bits/stdc++.h>
using namespace std;
int binarySearchasc (vector <int>& arr, int n, int key,int s, int e){
    int start = s;
    int end = e;

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

int binarySearchdsc (vector <int>& arr, int n, int key,int s, int e){
    int start = s;
    int end = e;

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

int peakelement(vector<int>&arr, int n){
    int low = 0, high = n-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            return mid;
        }
        else if(arr[mid] < arr[mid+1]){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return -1;
}

int search(vector<int>&arr, int n, int key){
    int pivot = peakelement(arr,n);
    return max(binarySearchasc(arr,n,key,0,pivot), binarySearchasc(arr,n,key,pivot+1,n-1));
}

int main()
{
    // eg : 6 ---> 1 3 5 15 4 2  ----> 3    ans : 1
    int n; cin >>n;
    vector <int> arr;
    for(int i=0; i<n; i++){
        int x; cin >>x;
        arr.push_back(x);
    }
    int x; cin >>x;
    cout << search(arr,n,x)<<endl;

    return 0;
}