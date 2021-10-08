#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main (){
    int N;
    cin >> N;
    vector<int> W(N);
    int sum = 0;
    for (int i = 0; i < N; i++){
        int x ;
        cin >> x;
        W[i] = x;
        sum += x;
    }
    int s1 = 0;
    int s2 = 0;
    int ans = 1000;
    for (int i = 0; i < N-1; i++){
        s1 += W[i];
        s2 = sum - s1;
        ans = min(ans, abs(s1-s2));
    }
    cout << ans <<endl;
    return 0;
}
