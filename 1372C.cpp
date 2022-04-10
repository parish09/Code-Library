#include<iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
int t,c=0;cin>>t;while(t--){
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(int i=0;i<n;i++){
       if(a[i]!=b[i]) c++;
    }
    cout<<c/2<<endl;


}}