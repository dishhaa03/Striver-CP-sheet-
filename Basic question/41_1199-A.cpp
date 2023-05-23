# include <bits/stdc++.h>
using namespace std;

bool check(int arr[],int n, int i, int j, int x, int y){
    int min = arr[i+x];
    for(int k=i; k<x;k++){
        if(min>arr[k]) return false;
    }
    if(j>=n){
        for(int k=i+x+1; k<n; k++){
            if(min>arr[k]) return false;
        }
        return true;
    }
    for(int k=i+x+1; k<=j; k++){
        if(min>arr[k]) return false;
    }
    return true;
}

int main()
{
    int n, x,y; cin >>n>>x>>y;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >>arr[i];
    }
    int j = x+y, i=0;
    bool flag = false;
    while(j<n+y){
        if(check(arr,n, i, j, x,y)){
            cout << i+x << endl;
            flag = true;
            break;
        }
        i++,j++;
    }
    if(!flag){
        cout << n << endl;
    }
    
    return 0;
}