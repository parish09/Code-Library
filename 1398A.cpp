#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <stdio.h>
using ll=long long int;
using namespace std;
int main(){
int t;cin>>t;
while(t--){
    ll n,c;cin>>n;
    int arr[n];
    bool flag=false;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //for(int j=0;j<n;j)
    for(int i=2;i<n;i++){
        if((arr[i-2]+arr[i-1])<arr[i]){
            flag=true;
            c=i;
            break;
        }
    }
    if(flag==true)cout<<c-2+1<<" "<<c-1+1<<" "<<c+1<<endl;
    else cout<<-1<<endl;
}

}