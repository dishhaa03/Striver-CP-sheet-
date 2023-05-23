# include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >>n; 
    for (int i = 0; i < n+1;i++)
    {
        
        for (int j = 0; j < (2*n )-1;j++)
        {
            if(j<(n-i))
            {
                cout << "  ";
            }
            else{
                if(i == 0){
                    cout << 0;
                    //continue;
                    break;
                } 
                int temp = 0;
                for(int k=(n-i); k<=n; k++){
                    cout <<temp<< " ";
                    temp++;
                }
                for(int k=n; k<(n+i); k++){
                    if(temp-2 == 0){
                        cout << temp-2;
                        temp--;
                        continue;
                    }
                    cout <<temp-2 << " ";
                    temp--;
                }
                break;
            }

        }cout << endl;
    }
    for (int i = n-1; i >=0 ; i--)
    {
        for (int j = 0; j < (2*n )-1;j++)
        {
            if(j<(n-i))
            {
                cout << "  ";
            }
            else{
                if(i == 0){
                    cout << 0;
                    break;
                }
                int temp = 0;
                for(int k=(n-i); k<=n; k++){
                    cout <<temp <<" ";
                    temp++;
                }
                for(int k=n; k<(n+i); k++){
                    if(temp-2 == 0){
                        cout << temp-2;
                        temp--;
                        continue;
                    }
                    cout <<temp-2<< " ";
                    temp--;
                }
                break;
            }

        }cout << endl;
    }
}

