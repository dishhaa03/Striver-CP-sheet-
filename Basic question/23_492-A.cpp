# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >>n;
    int i=1;
    while(n >= (i*(i+1)/2)){
        n -= i*(i+1)/2 ;
        i++;
    }
    cout << i-1;
    return 0;
}