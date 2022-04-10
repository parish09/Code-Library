#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
using ll=long long int;
using namespace std;

int main(){
    fast;tie;
    ll y,n,k,x;cin>>y>>k>>n;
    bool flag=false;
        for(int i=k;i<=n;i+=k){
            if((i-y)>0){
                flag=true;
                cout<<i-y<<" ";
            }
        }
        if(flag==false)cout<<-1;
    }