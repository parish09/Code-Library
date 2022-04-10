#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    int arr[n],c=0;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]!=-1){
            for(int j=i+1;j<n;j++){
                if(arr[j]%arr[i]==0 and arr[j]!=-1)arr[j]=-1;
            }
            c++;
        }
    }
    cout<<c<<'\n';
}