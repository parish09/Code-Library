
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
        int n,m,c=0;cin>>n>>m;
        string x;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x.at(m-1)=='R' && x.at(m-1)!='C' && i!=n-1)c++;
            else if(i==n-1){
                for(int j=0;j<m-1;j++){
                if(x.at(j)=='D')c++;
            }
            }
            //cout<<x<<c<<endl;
        }
        if(n==1 && m==1)c=0;
        cout<<c<<endl;
}}