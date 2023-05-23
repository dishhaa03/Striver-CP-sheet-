# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >>n;
    string str; cin >>str;
    cout << str[0];
    int temp = 2;
    for(int i=1; i<n; i++){
        cout << str[i];
        i+=temp-1;
        temp++;
    }cout << endl;

    return 0;
}