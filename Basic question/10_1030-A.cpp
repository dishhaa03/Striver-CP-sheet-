# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++) cin >>arr[i];
    bool flag= false;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            cout << "HARD" <<endl;
            flag = true;
            break;
        }
    }
    if(!flag) cout << "EASY" <<endl;
}