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
    int n,k,f,t,max=INT_MIN;cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>f>>t;
        if(t<=k){if(f>max)max=f;}
        else{ if(f-(t-k)>max)max=f-(t-k);}
    }
    cout<<max;
}