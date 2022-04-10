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
        bool flag=true;
        int n,kill_count=0;
        int A,B;cin>>A>>B>>n;
        vector<pair<int,int>> m(n);
        //int ma[n],mh[n];
        fl(i,0,n)cin>>m[i].first;
        fl(i,0,n)cin>>m[i].second;
        sort(m.begin(),m.end());
        fl(i,0,n-1){
            //cout<<mh[i]<<" "<<A<<" ";
            //cout<<B<<" ";
            if(B<0)break;
            double p=m[i].second,q=A;
            //cout<<p;
            int x=ceil(p/q);
            //p=B,q=ma[i];
            //int y=ceil(p/q);
            //cout<<x<<" ";
            B=B-x*m[i].first;
            kill_count++;
        }
        if(B<=0)flag=false;
        double p=m[n-1].second,q=A;
        int x=ceil(p/q);
        p=B,q=m[n-1].first;
        int y=ceil(p/q);
        if(x<=y)kill_count++;
        //cout<<kill_count;
        //cout<<endl;
        if(kill_count==n and flag==true)cout<<"YES\n";
        else cout<<"NO\n";
        
    }
}