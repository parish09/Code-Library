#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
using ll=long long int;
using namespace std;

int main(){
    fast;tie;
    int n,x,m=INT_MAX;cin>>n;
    pair<int,int> arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second=i+1;
    }
    arr[n].first=arr[0].first;
    arr[n].second=1;
    for(int i=0;i<n;i++){
        if(abs(arr[i].first-arr[i+1].first)<m){
            m=abs(arr[i].first-arr[i+1].first);
            x=i;
        }
    }
    cout<<arr[x].second<<" "<<arr[x+1].second;

}