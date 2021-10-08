
#include <bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int x, y;
    scanf("%d.%d", &x, &y);

    if (0 <= y && y <= 2)cout << x << "-";
    else if (3 <= y && y <= 6) cout << x;
    else if(7 <= y && y <= 9)cout << x << "+";
}
