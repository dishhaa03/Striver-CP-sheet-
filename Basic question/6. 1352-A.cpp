# include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >>t;
    while(t--){
        string str; cin >>str;
        int n = str.length();
        int temp[n] = {0};
        int count = 0;
        for(int i=0; i<n; i++){
            if(str[i] - '0' != 0){
                count++;
                temp[i] = (str[i]-'0') * pow(10, n-i-1);
            }
        }
        cout << count << endl;
        for(int i=0; i<n; i++){
            if(temp[i]!= 0) cout << temp[i] << " ";
        }cout << endl;
    }
}