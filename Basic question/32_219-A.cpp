# include <bits/stdc++.h>
using namespace std;

int main()
{
    int k; cin >>k;
    string str; cin >>str;
    map <char,int> mp;
    int n = str.length();
    for(int i=0; i<n; i++){
        mp[str[i]]++;
    }
    string ans = "";
    for(auto pr : mp){
        if(pr.second % k != 0){
            cout << -1 << endl;
            return 0;
        }
        for(int i=0; i<pr.second/k; i++){
            ans += pr.first;
        }
    }
    
    string add = ans;
    for(int i=0; i<k-1; i++){
        ans += add;
    }
    cout << ans << endl;

    return 0;
}