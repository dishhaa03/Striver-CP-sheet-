# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin >> str;
    bool flag = false;
    for(int i=0; i<5; i++){
        string str1; cin >>str1;
        if(str1[0] == str[0]) flag = true;
        if(str1[1] == str[1]) flag = true;
    }
    if(flag) cout << "YES" <<endl;
    else cout << "NO" << endl;
}