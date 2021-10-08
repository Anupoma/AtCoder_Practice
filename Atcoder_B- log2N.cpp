#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    long long n;
    long long k=1, cnt=0;
    cin>> n;
    while(k<=n){
        k <<= 1;
        cnt++;
    }
    cout << cnt-1 << endl;
}
