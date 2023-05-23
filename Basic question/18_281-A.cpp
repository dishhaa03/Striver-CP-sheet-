# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin >>str;
    int n = str.length();
    for(int i=0; i<n; i++){
        if(i == 0 && (str[i] >='a' && str[i] <= 'z')){
            cout << char(str[i] - 32)  ;
            continue;
        }
        cout << str[i];
    }
}