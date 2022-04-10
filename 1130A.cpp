#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    int pos=0,neg=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x>0)pos++;
        if(x<0)neg++;
    }
    int t=n/2;
    if(n%2!=0)t++;
    if(pos>=t)cout<<1;
    else if(neg>=t)cout<<-1;
    else cout<<0;
}