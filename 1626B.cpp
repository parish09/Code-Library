#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define mod 1000000007
using namespace std;
const int N=0;
int pre[N];
void pre_comp(){
    
}
void solve(){
    string s;cin>>s;
    bool doubled=false;
    int x,index;
    int n=s.size();
    fl(i,0,n-1){
        int a=s[i]-'0';
        int b=s[i+1]-'0';
        if(a+b>9){
            // if(s[i]=='1')continue;
            index=i;
            x=a+b;
            doubled=true;
            // break;
        }
    }
    string ans="";
    if(doubled){
        // cout<<index<<" "<<x<<endl;
        ans+=s.substr(0,index);
        // cout<<ans;
        char a=x%10+'0';
        // cout<<a;
        char b=(x/10)%10+'0';
        // cout<<b;
        ans=ans+b+a;
        
        ans+=s.substr(index+2,n-index+2);
        cout<<ans<<endl;
    }
    else{
        index=0;
        x=(s[0]-'0')+(s[1]-'0');
        ans+=(x%10+'0');
        ans+=s.substr(index+2,n-index+2);
        cout<<ans<<endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    pre_comp();
    int t;cin>>t;
    while(t--){
        solve();
    }
}