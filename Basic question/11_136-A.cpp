# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >>n;
    int arr[n];
    map <int,int> m;
    for(int i=1; i<=n; i++){
        cin >>arr[i];
        m[i] = arr[i];
    }
    for(int i=1; i<=n; i++){
        for(auto pr : m){
            if(pr.second == i) cout << pr.first << " ";
        }
    }cout << endl;
}