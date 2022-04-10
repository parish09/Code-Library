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
    int n,x,c=0;cin>>n;
    bool l=true,m=true;
    vector<int> less,more,equal,zero;
    for(int i=0;i<n;i++){
        cin>>x;
        if(l==true and x<0){
            less.push_back(x);
            l=false;
        }
        else if(m==true and x>0){
            more.push_back(x);
            m=false;
        }
        else{
            equal.push_back(x);
        }
    }
    if(m==true){
        for(auto &i:equal){
            if(i<0 && c<2){
                    c++;
                more.push_back(i);
            }
            else{
                zero.push_back(i);
            }
        }
    }
    if(zero.size()==0){
        for(auto &it:equal){
            zero.push_back(it);
        }
    }
    cout<<less.size()<<" ";
    for(auto &it:less){
        cout<<it<<" ";
    }
    cout<<endl<<more.size()<<" ";
    for(auto &it:more){
        cout<<it<<" ";
    }
    cout<<endl<<zero.size()<<" ";
    for(auto &it:zero){
        cout<<it<<" ";
    }
    equal.clear();

}
//}