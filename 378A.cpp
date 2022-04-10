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
    int a,b,w=0,d=0,l=0;cin>>a>>b;
    for(int i=1;i<=6;i++){
        if(abs(a-i)==abs(b-i))d++;
        else if(abs(a-i)<abs(b-i))w++;
        else l++;
    }
    cout<<w<<" "<<d<<" "<<l;

}