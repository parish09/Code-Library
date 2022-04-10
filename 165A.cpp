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
    int n,ans=0,c=0;cin>>n;
    bool l,r,u,d;
    pair<int,int> cor[n];
    for(int i=0;i<n;i++){
        cin>>cor[i].first>>cor[i].second;
    }
    for(int i=0;i<n;i++){
            l=r=d=u=c=0;
        for(int j=0;j<n;j++){
            if(j!=i){
                    //cout<<j<<endl;
                if(cor[i].first>cor[j].first && cor[i].second==cor[j].second and l==0){c++;l=1;}
                if(cor[i].first<cor[j].first && cor[i].second==cor[j].second and r==0){c++;r=1;}
                if(cor[i].first==cor[j].first && cor[i].second>cor[j].second and u==0){c++;u=1;}
                if(cor[i].first==cor[j].first && cor[i].second<cor[j].second and d==0){c++;d=1;}
            }

        }
         if(c>=4)ans++;
         //cout<<c<<endl;

    }
    cout<<ans<<endl;
}