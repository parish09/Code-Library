#include <iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int first=arr[0],cnt1=0,cnt2=0,i=0,mx=INT_MIN;
    if(first==1){
        while(arr[i]==1 and i<n){
            cnt1++;
            i++;
        }
    }
    else{
            
        while(arr[i]==2 and i<n){
            cnt2++;
            i++;
        }
    }
    //cout<<i<<'\n';
    for(int j=i;j<n;){
        //cout<<j<<" ";
        if(first==1){
            while(arr[j]==2 and j<n){
                //cout<<arr[j]<<" "<<j<<'\n';
                cnt2++;
                j++;
            }
        }
        else{
            while(arr[j]==1 and j<n){
                //cout<<arr[j]<<" "<<j<<'\n';
                cnt1++;
                j++;
            }
        }
        //cout<<j<<"\n";
        mx=max(mx,min(cnt1,cnt2));
        //cout<<first<<" "<<cnt1<<" "<<cnt2<<'\n';
        if(first==1)cnt1=0,first=2;
        else cnt2=0,first=1;
        
    }
    cout<<mx*2<<'\n';
    
}