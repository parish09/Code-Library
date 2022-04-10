#include <iostream>

#include <string>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
typedef long long ll;
using namespace std;

int main(){
fast;tie;
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    if(k>n)cout<<-1;
    else{
        cout<<arr[n-k]<<" 0";
    }
}