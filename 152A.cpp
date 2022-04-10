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
    int n,l,x,m,c=0;cin>>n>>l;
    string arr[n];
    int freq[60];
    int ans[n];
    memset(ans,0,sizeof(ans));
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<l;j++){
        m=INT_MIN;
        memset(freq,0,sizeof(freq));
        for(int i=0;i<n;i++){
            x=(int)arr[i][j];
            freq[x]++;
            if(x>m)m=x;
        }
       // cout<<m<<endl;
        for(int k=0;k<n;k++){
                //cout<<(int)arr[k][j]<<" ";
            if((int)arr[k][j]==m)ans[k]++;
        }
        //cout<<endl;
    }
    for(int i=0;i<n;i++){
           // cout<<ans[i]<<"  ";
        if(ans[i]!=0)c++;
    }
    cout<<c;

}