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
    ll a,b,sum=0;cin>>a>>b;
    sum=a+b;
    ll t=1,x=0,y=0,z=0;
    while(sum){
        int n=sum%10;
        if(n!=0){
            x=x+n*t;
            t*=10;
        }
        sum=sum/10;

    }
    t=1;
    while(b){
        int q=b%10;
        if(q!=0){
            y=y+q*t;
            t*=10;
        }
        b=b/10;

    }
    t=1;
    while(a){
        int q=a%10;
        if(q!=0){
            z=z+q*t;
            t*=10;
        }
        a=a/10;

    }
    //cout<<x<<" "<<y<<" "<<z<<endl;
    //cout<<sum1<<" "<<sum2;
   if(x==y+z)cout<<"YES";
    else cout<<"NO";

}