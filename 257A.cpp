#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
//using ll=long long int;
using namespace std;

int main(){
fast;tie;
    int n,m,k,c=0,sum;cin>>n>>m>>k;
    sum=k;
    bool flag=false;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(sum>=m)cout<<0;
    else{
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++){
        sum=sum+arr[i]-1;
        c++;
        if(sum>=m){
            flag=true;
            break;
        }
    }
    if(flag==true)cout<<c;
    else cout<<-1;
    }
}