#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    string s;cin>>s;
    int c1=0,c2=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='S' and s[i+1]=='F')c1++;
        if(s[i]=='F' and s[i+1]=='S')c2++;
    }
    if(c1>c2)cout<<"YES\n";
    else cout<<"NO\n";
}