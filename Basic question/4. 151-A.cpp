# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin >>n>>k>>l>>c>>d>>p>>nl>>np;
    int milk=k*l, lime=c*d, salt=p;
    int ans = min(milk/nl, min(salt/np, lime));
    cout << ans/n << endl;

    return 0;
}