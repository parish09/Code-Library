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
//int t;cin>>t;
//while(t--){
    int n,m,a=INT_MAX,b=INT_MIN,c=INT_MAX;cin>>n>>m;
    int arrn[n],arrm[m];
    for(int i=0;i<n;i++){
        cin>>arrn[i];
        a=min(a,arrn[i]);
        b=max(b,arrn[i]);
    }
    for(int i=0;i<m;i++){
        cin>>arrm[i];
        c=min(c,arrm[i]);
    }
    int x=max(2*a,b);
    if(x<c)cout<<x;
    else cout<<-1;
}
//}