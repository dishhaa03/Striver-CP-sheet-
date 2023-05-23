# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >>n;
    int arr[7];
    for(int i=0; i<7; i++){
        cin >>arr[i];
    }
    int ans = 0,i=0;
    while(1){
        ans += arr[i];
        i++;
        if(ans >= n){
            cout << i;
            break;
        }
        if(i == 7) i=0;
    }
    
}