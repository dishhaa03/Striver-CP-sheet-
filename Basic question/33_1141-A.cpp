# include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b; cin >>a>>b;
    if(a == b){
        cout << 0;
        return 0;
    }
    if(a > b) {
        cout << -1 ;
        return 0;
    }
    int count = 0;
    bool flag = false;
    while(a < b){
        if(b/a % 2 == 0){
            count++;
            a *= 2;
        }else{
            count++;
            a *= 3;
        }
        if(b == a){
            cout << count;
            flag = true;
            break;
        }
    }
    if(!flag) cout << -1;
}