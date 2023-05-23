# include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >>t;
    while(t--){
        long long a,b,c; cin >>a>>b>>c;

        if(a < c && b>=1) cout << 1 << " ";
        else cout << -1 << " ";

        if(b*a > c) cout << b << endl;
        else cout << "-1" << endl;
    }
}