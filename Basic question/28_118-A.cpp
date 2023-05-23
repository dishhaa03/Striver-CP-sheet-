# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin >>str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    int n = str.length();
    for(int i=0; i<n; i++){
        if(str[i] == 'a' || str[i] == 'o' || str[i] == 'y' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i'){
            continue;
        }else{
            cout << ".";
            cout << str[i];
        }
    }cout << endl;

}