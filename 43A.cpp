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
int t,a=0,b=0;cin>>t;
string x,p;
a++;
cin>>x;
t--;
while(t--){
    string  y;
    cin>>y;
    if(y==x)a++;
    else {
        p=y;
        b++;
    }

}
//cout<<a<<b<<x;
if(a>b)cout<<x;
else cout<<p;
}