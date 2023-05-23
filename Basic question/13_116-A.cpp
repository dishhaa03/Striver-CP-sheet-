# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >>n;
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    } 
    int maxi = 0, temp=0;
    for(int i=0; i<n; i++){
        temp += (b[i]-a[i]) ;
        if(temp < 0) temp = 0;
        if(maxi < temp) maxi = temp;
    }
    cout << maxi << endl;
}