# include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >>t;
    while(t--){
        int n,m; cin >>n>>m;
        char arr[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> arr[i][j];
            }
        }
        int i=n-1, count=0;
        for(int j=0; j<m-1; j++){
            if(arr[i][j] == 'D') count++;
        }
        for(int i=0; i<n-1; i++){
            int j=m-1;
            if(arr[i][j] == 'R') count++;
        }

        cout << count << endl;
   }
}