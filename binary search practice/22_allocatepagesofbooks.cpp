# include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>&arr, int n, int k, int mid){
    int sum = 0,count=1;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum <= mid) continue;
        else{
            count++;
            sum=arr[i];
        }
    }
    if(count <= k) return true;
    else return false;
}

int main()
{
    // eg : 4 2 ----> 10 20 30 40   ans :    
    int n,k; cin >>n>>k;
    vector <int> arr;
    int sum=0;
    for(int i=0; i<n; i++){
        int x; cin >>x;
        arr.push_back(x);
        sum += x;
    }

    int low = *max_element(arr.begin(), arr.end());
    int high = sum;
    int ans = 0;
    while(low < high){
        int mid = low + (high-low)/2;
        if(isPossible(arr,n,k,mid)){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    cout << ans << endl;
    return 0;
}