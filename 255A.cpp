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
    int x,n,c=0,bi=0,ba=0;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i+=3){
        c+=arr[i];
    }
    for(int i=1;i<n;i+=3){
        bi+=arr[i];
    }
    for(int i=2;i<n;i+=3){
        ba+=arr[i];
    }
    if(c>bi && c>ba)cout<<"chest";
    else if(bi>c && bi>ba)cout<<"biceps";
    else cout<<"back";
}