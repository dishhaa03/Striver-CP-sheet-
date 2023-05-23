# include <bits/stdc++.h>
using namespace std;

int sum(string str, int l, int h){
    int ans = 0;
    for(int i=l; i<=h; i++){
        if(str[i] == '1') ans += 1;
    }
    return ans;
}

bool allzeroone(string str, int n){
    if(str[0] == '0'){
        for(int i=1; i<n; i++) if(str[i]!='0') return false;
    }else{
        for(int i=1; i<n; i++) if(str[i]!='1') return false;
    }
    return true;
}

int main()
{
    int t; cin >>t;
    while(t--){
        string str; cin >>str;
        int count = 0;
        int n = str.length();
        int l=0, h=n-1;
        if(allzeroone(str,n)){
            cout << 0 << endl;
            continue;
        }
        while(l<n){
            if(str[l] == '0') l++;
            else break;
        }
        while(h>=0){
            if(str[h] == '0') h--;
            else break;
        }
        // cout << l << " "<<h << " ";
        cout << (h-l+1) - sum(str,l,h) << endl;
    }
}