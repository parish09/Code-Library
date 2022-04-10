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
    int n,k,y,x;cin>>n>>k;
    bool flag=false;
    if(n*2==k)cout<<n;
    else{
        for(int i=3;i<4;i++){
            x=k,y=n;
            while(x>0){

                x=x-i;
                y--;
                if(y==0)break;
           //cout<<x<<" "<<y<<endl;
                if((y*2)==x){
                    flag=true;
                    break;
                }
            }
            if(flag==true)break;
        }
       // cout<<x;
        if(flag==true)cout<<x/2;
        else cout<<0;
    }
}