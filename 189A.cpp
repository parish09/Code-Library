#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
using ll=long long int;
using namespace std;

int main(){
    fast;tie;
    int n,a,b,c;cin>>n>>a>>b>>c;
    int dp[n+1];
    memset(dp,-1,sizeof(dp));
    dp[0]=0;
    int x,y,z;

    for(int i=1;i<=n;i++){
            x=y=z=INT_MIN;
        if(i>=a){
            x=1+dp[i-a];
        }
        if(i>=b){
            y=1+dp[i-b];
        }
        if(i>=c){
            z=1+dp[i-c];
        }
        dp[i]=max(x,max(y,z));
    }
    cout<<dp[n];
}