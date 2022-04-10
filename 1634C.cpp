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
    int n,k;cin>>n>>k;
    // int arr[n];fl(i,0,n)cin>>arr[i];
    if(k==1){
        cout<<"YES\n";
        fl(i,1,n*k+1){
            cout<<i<<endl;
        }
    }
    else if(n*k%2==1)cout<<"NO\n";
    else{
        unordered_map<int,int> um;
        vector<int> even,odd;
        
            fl(i,1,n*k+1){
                um[i]++;
                if(i%2==0)even.pb(i);
                else odd.pb(i);
            }
            
        if(even.size()%k!=0 or odd.size()%k!=0)cout<<"NO"<<endl;
        else{
            
        cout<<"YES\n";
            for(int i=0;i<even.size();){
                for(int j=0;j<k;j++){
                    cout<<even[i+j]<<" ";
                }
                cout<<endl;
                i+=k;
            }
            for(int i=0;i<odd.size();){
                for(int j=0;j<k;j++){
                    cout<<odd[i+j]<<" ";
                }
                cout<<endl;
                i+=k;
            }
        }
        
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