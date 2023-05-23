# include <bits/stdc++.h>
using namespace std;

bool isCaptial(char ch){
    return (ch>='A' && ch<='Z');
}

void changeCase (string str){
    int n = str.length();
    for(int i=0; i<n; i++){
        if(isCaptial(str[i])) cout << char(str[i]+32);
        else cout << char(str[i]-32);
    }cout << endl;
}

int main()
{
    string str; cin >>str;
    int n = str.length();
    bool flag = true;
    for(int i=1; i<n; i++){
        if(!isCaptial(str[i])){
            cout << str << endl;
            flag = false;
            break;
        }
    }
    if(flag) changeCase(str);
    return 0;
}