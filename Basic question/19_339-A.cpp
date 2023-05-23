# include <bits/stdc++.h> 
using namespace std;

int main()
{
    string str; cin >>str;
    int n = str.length();
    sort(str.begin(), str.end());
    string ans = "";
    for(int i=0; i<n; i++){
        if(str[i] !='+'){
            ans += str[i];
            ans += '+';
        }
    }
    cout << ans.substr(0,n);
    return 0;
}