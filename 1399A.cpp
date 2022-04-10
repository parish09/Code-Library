#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <stdio.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
    int n,x=0;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        if(abs(arr[i+1]-arr[i])<=1)x++;
    }
    if(x==n-1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}}