#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n,d;cin>>n>>d;
    int c=0;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]==2*d)c++;
        else if(arr[i+1]-arr[i]>2*d)c+=2;
    }
    cout<<c+2<<'\n';
}