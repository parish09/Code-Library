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
    int n,cw,cb,cost=0;cin>>n>>cw>>cb;
    char s[n];
    fl(i,0,n)cin>>s[i];
    bool flag=true;
    
        int l=0,r=n-1;
        while(l<=r){
            //cout<<s[l]<<" "<<s[r]<<endl;
            if(flag==false)break;
            if((s[l]=='0' and s[r]=='1') or (s[l]=='1' and s[r]=='0'))flag=false;
            else if((s[l]=='2' and s[r]=='1') or (s[l]=='1' and s[r]=='2'))cost+=cb;
            else if((s[l]=='2' and s[r]=='0') or (s[l]=='0' and s[r]=='2'))cost+=cw;
            else if((s[l]=='2' and s[r]=='2' and l!=r))cost+=2*min(cw,cb);
            else if(n%2!=0 and (l==n/2 or r==n/2)){
                if(s[l]=='2')cost+=min(cw,cb);
            }
            l++;
            r--;
        }
        if(flag==false)cout<<-1;
        else cout<<cost;
    

	
}