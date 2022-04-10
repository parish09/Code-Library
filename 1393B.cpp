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
    long long n,x;cin>>n;
    int freq[3];
    freq[1]=0,freq[2]=0;
    for(int i=0;i<n;i++){
        cin>>x;
        freq[x]++;
    }
    //cout<<freq[1]<<freq[2];
    cin>>x;
    for(int i=0;i<x;i++){
        char c;int p;
        cin>>c>>p;
        if(c=='-')freq[p]--;
        if(c=='+')freq[p]++;
        if(freq[1]>=8 or freq[2]>=8)cout<<"YES"<<endl;
        else if(freq[1]>=6 && freq[2]>=2)cout<<"YES"<<endl;
        else if(freq[1]>=2 && freq[2]>=6)cout<<"YES"<<endl;
        else if(freq[1]>=4 && freq[2]>=4)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    //cout<<freq[1]<<freq[2];


}