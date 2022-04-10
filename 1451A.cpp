#include <iostream>

#include <string>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
typedef long long ll;
using namespace std;

int main(){
fast;tie;
    int t;cin>>t;
    while(t--){
        int n,c=0;cin>>n;
        if(n==1)cout<<0;
        else if(n<=3)cout<<n-1;
        else if(n%2==0)cout<<2;
        else cout<<3;
        cout<<endl;
    }
}