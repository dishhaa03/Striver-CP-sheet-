# include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n; cin >>n;
    int count = 0;
    while(n!=0){
        int rem = n%10;
        if(rem == 4 || rem == 7){
            count++;
        }
        n /= 10;
    }
    if(count==4 || count==7 || count == 44 ||count == 47) cout << "YES" << endl;
    else cout << "NO" <<endl;
    return 0;
}