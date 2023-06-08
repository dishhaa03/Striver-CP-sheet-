// you are given an infite binary array
// task is to find the index of first '1'

# include <bits/stdc++.h>
using namespace std;

int firstoccurence(string str, int low, int high){
    int ans = -1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(str[mid] == '1'){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int firstone(string str){
    int low = 0, high = 1;
    while(str[low]=='0' && str[high] == '0'){
        low = high;
        high *= 2;
    }
    return firstoccurence(str, low, high);
}

int main()
{
    string str; cin >>str;
    cout << firstone(str);

    return 0;
}