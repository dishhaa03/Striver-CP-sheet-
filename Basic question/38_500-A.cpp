# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t; cin >>n>>t;
    int arr[n] = {0};
    for(int i=1; i<n; i++){
        cin >>arr[i];
    }
    bool visited[n] = {false};
    visited[1] = true;
    for(int i=1; i<n; i+=arr[i]){
        visited[i+arr[i]] = true;
    }

    if(visited[t]) cout << "YES";
    else cout << "NO";
    return 0;
}