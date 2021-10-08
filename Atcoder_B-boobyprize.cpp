#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define optimize()ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int n;cin>>n;
    vector<pair<int,int>> a;
    for (int i = 0; i < n; i++){
        int b;cin>>b;
        a.push_back(make_pair(b,i+1));
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());

    cout << a[1].second << endl;
    return 0;
}
