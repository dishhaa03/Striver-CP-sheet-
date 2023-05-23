# include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        cout << "2" << endl;
        for(int i=n; i>1; i--){
            if(i == n){
                cout << n <<" "<< n-1 <<endl;
                continue;
            }
            cout << i+1 << " "<< i-1 << endl;
        }
    }
}