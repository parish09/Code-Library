#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        fl(i,0,s.length()){
            if(i%2==0){
                if(s[i]=='a')s[i]='b';
                else s[i]='a';
            }
            else{
                if(s[i]=='z')s[i]='y';
                else s[i]='z';
            }
        }
        cout<<s<<endl;
    }
	
	
}