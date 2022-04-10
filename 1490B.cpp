#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define mod 1000000007
using namespace std;
const int N=1;
int pre[N];
void pre_comp(){
    
}
void solve(){
    int n;cin>>n;int arr[n];fl(i,0,n)cin>>arr[i];
    int c1=0,c2=0,c0=0;
    fl(i,0,n){
    	if(arr[i]%3==0)c0++;
    	else if(arr[i]%3==1)c1++;
    	else if(arr[i]%3==2)c2++;
    }
    bool flag0=false,flag1=false,flag2=false;
    if(c0>c1 and c0>c2)flag0=true;
    else if(c1>c0 and c1>c2)flag1=true;
    else flag2=true;
    int c=0,mx=max(c0,max(c1,c2));
    while(c1>n/3){
            if(c2<n/3){
                c1--;
                c2++;
                c+=1;
            }
            else if(c0<n/3){
                c1--;
                c0++;
                c+=2;
            }
        
    }
    while(c0>n/3){
            if(c1<n/3){
                c0--;
                c1++;
                c+=1;
            }
            else if(c2<n/3){
                c0--;
                c2++;
                c+=2;
            }
        
    }
    while(c2>n/3 ){
            if(c0<n/3){
                c2--;
                c0++;
                c+=1;
            }
            else if(c1<n/3){
                c2--;
                c1++;
                c+=2;
            }
        
    }
    cout<<c<<endl;
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