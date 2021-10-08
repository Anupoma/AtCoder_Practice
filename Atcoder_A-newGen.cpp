#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int N;
    cin>>N;
    if(N <= 125) cout<< "4" << endl;
    else if(N <= 211) cout << "6" << endl;
    else cout << "8" << endl;
    return 0;
}
