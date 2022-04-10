#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
using ll=long long int;
using namespace std;

int main(){
    fast;tie;
    ll n,m;cin>>n>>m;
    if(n>1 && m==0)cout<<"No solution";
    else cout<<fixed<<setprecision(0)<<m*pow(10,n-1);

}