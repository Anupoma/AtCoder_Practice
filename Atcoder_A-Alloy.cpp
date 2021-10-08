#include<bits/stdc++.h>
using namespace std;
//using ll = long long;
#define endl '\n'
#define optimize()ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
int main()
{
    optimize();

    int a, b;
    cin>>a>>b;
    if (a>0 && b>0) cout<< "Alloy" << endl;
    if(a==0 && 0<b) cout<< "Silver" << endl;
    if(0<a && b==0) cout<< "Gold" << endl;
    return 0;
}
