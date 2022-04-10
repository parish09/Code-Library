#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
using ll=long long int;
using namespace std;

int main(){
    fast;tie;
    bool flag=false;
    int n,m;cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                if(i==0 or i==n-1)flag=true;
                else if(j==0 or j==m-1)flag=true;
                //cout<<i<<j;
            }
        }
    }
    if(flag==true)cout<<2;
    else cout<<4;

}