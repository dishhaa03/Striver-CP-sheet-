# include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >>t;
    string inputstr[] = {"Icosahedron", "Cube", "Tetrahedron", "Dodecahedron", "Octahedron"};
    int inputvalue[] = {20, 6, 4, 12, 8};
    int count = 0;
    while(t--){
        string str; cin >>str;
        for(int i=0; i<5; i++){
            if(str == inputstr[i]) count += inputvalue[i];
        }
    }
    cout << count << endl;
}