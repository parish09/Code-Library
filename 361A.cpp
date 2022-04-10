#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
using ll=long long int;
using namespace std;

int main(){
    fast;tie;
    int n,m;cin>>n>>m;
    int arr[n][n];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++){
        arr[i][i]=m;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}