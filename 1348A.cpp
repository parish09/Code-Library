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
    int n;cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        arr[i]=i;
    }
    long long unsigned int s1=0,s2=0;
    s1=+pow(2,arr[n]);
    for(int i=1;i<=n/2-1;i++){
        s1+=pow(2,arr[i]);
    }
    for(int i=n/2;i<=n-1;i++){
        s2+=pow(2,arr[i]);
    }
    if(s1>s2)cout<<(s1-s2)<<endl;
    else cout<<(s1-s2)<<endl;
}
}