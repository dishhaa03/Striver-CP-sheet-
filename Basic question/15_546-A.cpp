# include <bits/stdc++.h>
using namespace std;

int main()
{
    long long k,n,w; cin >>k>>n>>w;
    long long ans = w*(w+1)*k/2;
    if(ans - n < 0){
        cout << "0"<<endl;
        return 0;
    } 
    cout << ans-n << endl;
    return 0;
}