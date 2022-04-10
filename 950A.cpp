#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l,a,r;cin>>l>>r>>a;
    int x=abs(r-l);
    if(x>a)cout<<(min(l+a,r+a))*2;
    else{
        a=a-x;
        a=a/2;
        cout<<(max(l,r)+a)*2;
    }
}