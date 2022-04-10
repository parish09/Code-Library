#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <set>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
using namespace std;
int main(){
    fast;tie;
    bool flag=false;
    int x,y,c=0,a=0,b=0;cin>>x>>y;
    if(x==0 and y==0)cout<<0;
    else{
    for(int i=1;i<=abs(max(x,y))+2;i++){
        if(i%2!=0){
            for(int j=0;j<i and flag==false;j++){
                a+=1;
                if(a==x and b==y){
                    flag=true;
                    break;
                }
            }
            if(flag==true)break;
            c++;
            for(int j=0;j<i and flag==false;j++){
                b+=1;
                if(a==x and b==y){
                    flag=true;
                    break;
                }
            }
            if(flag==true)break;
            c++;
        }
        else{
            for(int j=0;j<i and flag==false;j++){
                a-=1;
                if(a==x and b==y){
                    flag=true;
                    break;
                }
            }
            if(flag==true)break;
            c++;
            for(int j=0;j<i and flag==false;j++){
                b-=1;
                if(a==x and b==y){
                    flag=true;
                    break;
                }
            }
            if(flag==true)break;
            c++;
        }
    }
    cout<<c;}
}