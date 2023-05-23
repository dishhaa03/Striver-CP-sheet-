# include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >>t;
    while(t--){
        int n; cin >>n;
        int count = 0;
        int rem;
        while(n!=0){
            rem = n%10;
            count++;
            n /= 10;
        }
        int ans = 0;
        ans += ((rem-1)*10);
        ans += ((count)*(count+1)/2);
        cout << ans<<endl;
    }
}