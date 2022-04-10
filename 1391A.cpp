
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
     for(int i=2;i<=n;i++){
        if(i%2!=0)cout<<i;
     }
     cout<<1;
     for(int i=1;i<=n;i++){
        if(i%2==0)cout<<i;
     }
     cout<<endl;
}}