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
    int n,m=0,x;cin>>n;
    int freq[3002];
    memset(freq,0,sizeof(freq));
    bool flag=true;
    for(int i=0;i<n;i++){
        cin>>x;
        freq[x]++;
    }
    while(flag){
        m++;
        if(freq[m]==0)flag=false;
    }
    cout<<m;

}