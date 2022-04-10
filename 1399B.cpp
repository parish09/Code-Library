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
    long long int n,c=0,mina=INT_MAX,minb=INT_MAX,y;cin>>n;
    long long int a[n],b[n];
    for(long long int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<mina)mina=a[i];
    }
    for(long long int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]<minb)minb=b[i];
    }
    //cout<<endl<<mina<<" "<<minb<<endl;
    for(int i=0;i<n;i++){
        if(a[i]!=mina && b[i]!=minb){
            if(a[i]-mina>b[i]-minb)y=b[i]-minb;
            else y=a[i]-mina;
            a[i]-=y;
            b[i]-=y;
            c+=y;
        }
        if(a[i]!=mina){
            c+=a[i]-mina;
        }
        if(b[i]!=minb){
            c+=b[i]-minb;
        }
        //cout<<c<<endl;
    }
    cout<<c<<endl;

}}