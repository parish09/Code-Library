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
    int l1,l2;cin>>l1>>l2;
    // int arr[n];fl(i,0,n)cin>>arr[i];
    string s1,s2;cin>>s1>>s2;
    pair<int,int> arr[l2];
    int j=0;
    fl(i,0,l1){
        if(j<l2 and s1[i]==s2[j]){
            arr[j].first=i;
            j++;
        }
    }
    j=l2-1;
    fld(i,l1-1,0){
        if(j>=0 and s1[i]==s2[j]){
            arr[j].second=i;
            j--;
        }
    }
    int ans=-1;
    fl(i,0,l2-1){
        ans=max(ans,abs(arr[i].first-arr[i+1].second));
    }
    cout<<ans<<endl;
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