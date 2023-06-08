//given a 2d array which is row wise and coloumn wise sorted.
// task is to find the key element 
// worst time complexity will ne O(n+m)...

# include <bits/stdc++.h>
using namespace std;


int main()
{
    int m,n; cin >>m>>n;
    vector <int> arr[n];
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            int x; cin >>x;
            arr[i].push_back(x);
        }
    }
    //m represent the ro and n will represent the coloum no.
    int x; cin >>x;
    //find the row in which element will be present
    i=0, j=m-1;
    pair <int,int>ans;
    bool flag = true;
    while(i>=0 && i<=n-1 && j>=0 && j<=m-1){
        if(arr[i][j] == x) {
            ans.first = i;
            ans.second = j;
            flag = false;
            break;
        }
        else if(arr[i][j] > x) j--;
        else if(arr[i][j] < x) i++;
    }
    if(flag){
        cout << -1 << endl;
        return 0;
    } 
    cout << ans.first << " " << ans.second << endl;
    return 0;

}

