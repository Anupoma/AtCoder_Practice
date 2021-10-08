#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize()ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
string s[1005],t[1005];
int main(){
    optimize();
      int n;
      cin>>n;
      for(int i=0;i<n;i++)
        cin>>s[i]>>t[i];
      for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
          if(s[i]==s[j]&&t[i]==t[j]){
            cout<<"Yes"<<endl;
            return 0;
          }
      cout<<"No";
      return 0;
}
