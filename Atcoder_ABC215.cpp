#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    string S;
    cin>> S;
    string S1 = "Hello,World!";

    if(S.length() != S1.length()){
        cout<< "WA\n";
    }
    else{
        if(S == S1) cout<< "AC\n";
        else cout<< "WA\n";
    }

    return 0;
}
