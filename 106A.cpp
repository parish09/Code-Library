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
    string trump,p1,p2;cin>>trump>>p1>>p2;
    int r1,r2;
   // cout<<p1<<p2<<endl;
         if(p1[0]=='6')r1=6;
    else if(p1[0]=='7')r1=7;
    else if(p1[0]=='8')r1=8;
    else if(p1[0]=='9')r1=9;
    else if(p1[0]=='T')r1=10;
    else if(p1[0]=='J')r1=11;
    else if(p1[0]=='Q')r1=12;
    else if(p1[0]=='K')r1=13;
    else if(p1[0]=='A')r1=14;

         if(p2[0]=='6')r2=6;
    else if(p2[0]=='7')r2=7;
    else if(p2[0]=='8')r2=8;
    else if(p2[0]=='9')r2=9;
    else if(p2[0]=='T')r2=10;
    else if(p2[0]=='J')r2=11;
    else if(p2[0]=='Q')r2=12;
    else if(p2[0]=='K')r2=13;
    else if(p2[0]=='A')r2=14;

    if(p1[1]==trump[0] && p2[1]!=trump[0]){
        cout<<"YES";
    }
    else if(p2[1]==trump[0] && p1[1]!=trump[0]){
        cout<<"NO";
    }
    else{
          // cout<<r1<<r2<<endl;
        if(p1[1]==p2[1]){
            if(r1>r2)cout<<"YES";
            else cout<<"NO";
        }
        else cout<<"NO";
    }
}