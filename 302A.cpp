#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
using ll=long long int;
using namespace std;

int main(){
    fast;tie;
    bool flag=false;
    int n,m,x,y,c=0,d;cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1)c++;
    }
    d=n-c;

    int mini=min(d,c);
    //cout<<d<<c<<mini;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        int z=y-x+1;//cout<<z;
        if(z<=mini*2 && z!=1 && z%2==0){
            cout<<1<<endl;
        }
        else cout<<0<<endl;

    }

}