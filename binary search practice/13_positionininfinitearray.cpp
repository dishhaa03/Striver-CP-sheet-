# include <bits/stdc++.h>
using namespace std;

int binarySearch (int arr[], int key, int s, int e){
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

void searchininfinite(int arr[], int key){
    int low = 0, high=1;
    while(arr[high] < key && key > arr[low]){
        low = high;
        high *= 2;
    }
    //cout << low << " " << high << endl;
    cout << binarySearch(arr,key,low,high);
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int x; cin >>x;
    searchininfinite(arr,x);

    return 0;
}