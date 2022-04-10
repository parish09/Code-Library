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
    string s,t;cin>>s>>t;
    int g=0,c=0;
    for(int i=0;i<t.length();i++){
        if(s[g]==t[i]){
            g++;
            c++;
                }
    }
    cout<<c+1;
}
//}