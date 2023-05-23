# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >>n;
    int arr[n];
    int min = 101, max = 0; 
    int minidx = 0, maxidx = 0;
    for(int i=0; i<n; i++){
        cin >>arr[i];
        if(min >= arr[i]){
            min = arr[i];
            minidx = i;
        }
        if(max < arr[i]){
            max = arr[i];
            maxidx = i;
        }
    } 
    if(minidx > maxidx) cout << maxidx + n - minidx -1 << endl;
    else cout << maxidx + n - minidx -2 << endl;
    
}