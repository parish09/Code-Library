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
    long int n,c=0,ans=0,k,x;cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>x;
        c=0;
        while(x){
            int p=x%10;
            if(p==4 || p==7)c++;
            x/=10;
        }
        if(c>k)ans++;
    }
    cout<<n-ans<<endl;
}