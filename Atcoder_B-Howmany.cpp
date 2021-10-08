#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int s, t;
    int cnt=0;
    cin>>s>>t;
    for(int i=0; i<=100; i++){
        for(int j=0; j<=100; j++){
            for(int k=0; k<=100; k++){
                if((i+j+k)<=s and (i*j*k)<=t){
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}
