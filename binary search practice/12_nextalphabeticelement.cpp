# include <bits/stdc++.h>
using namespace std;

char nextelement(vector<char>&arr, int n, int key){
    int low=0, high=n-1;

    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] == key){
            //return arr[mid+1]; ---->this cannot be done because array can have repetative elements acddf type..
            low = mid+1;
        } 
        if(arr[mid] > key){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return arr[low];
}

int main()
{
    // eg : 4 ----> a c d f --->d     ans:f
    // eg : 4 ----> a c d f---->e     ans:next
    int n; cin >>n;
    vector<char>arr;
    for(int i=0; i<n; i++){
        char x; cin >>x;
        arr.push_back(x);
    }
    char x; cin >>x;
    cout << nextelement(arr,n,x)<<endl;
}