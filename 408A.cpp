#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
using ll=long long int;
using namespace std;

int main(){
    fast;tie;
    int t,x,m=INT_MAX,total;cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    for(int i=0;i<t;i++){
            total=0;
        for(int j=0;j<arr[i];j++){
            cin>>x;
            total+=x;
        }
        total=total*5+arr[i]*15;
        if(total<m)m=total;
    }
    cout<<m;
}