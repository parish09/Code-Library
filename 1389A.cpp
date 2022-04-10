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
int t;cin>>t;
while(t--){
    ll x,y;cin>>x>>y;
    if(2*x>y)cout<<-1<<" "<<-1<<endl;
    else cout<<x<<" "<<2*x<<endl;
}
}