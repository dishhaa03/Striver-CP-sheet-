# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin >> str;
    int n = str.length();
    int count[26] = {0};
    for(int i=0; i<n; i++){
        count[str[i] - 'a']++;
    }
    int ans= 0;
    for(int i=0; i<26; i++){
        if(count[i]!=0) ans++;
    }
    if(ans%2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}