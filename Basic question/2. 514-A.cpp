# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin >>str;
    int n = str.length();
    bool first9 = false;
    if(str[0]-'0' == 9) first9=true;
    for(int i=0; i<n; i++){
        if(str[i]-'0' > 4){
            str[i] = (9-(str[i]-'0') + '0');
        }
    }
    if(first9) str[0] = '9';
    cout << str << endl;
    return 0;

}