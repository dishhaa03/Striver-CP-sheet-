# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++) cin >>arr[i];
    int maxi = 1;
    for(int i=0; i<n; i++){
        int count = 1;
        for(int j=i; j<n-1; j++){
            if(arr[j] < arr[j+1]) count++;
            else break;
        }
        maxi = max(maxi, count);
        i += (count-1);
    }
    cout << maxi << endl;
}