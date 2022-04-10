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
    string s;cin>>s;
    int x=0;
    for(int i=0;i<s.length();i++){
            x=0;
            int y=s[i];
        for(int j=0;j<7;j++){
            if(y==s[i+j]){
                x++;
            }
        }
        if (x>=7){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}