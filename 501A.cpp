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
    int a,b,c,d;cin>>a>>b>>c>>d;
    int vasmax=0,mismax=0;
    vasmax=max(((3*b)/10),(b-(b/250)*d));
    mismax=max(((3*a)/10),(a-(a/250)*c));
    if(vasmax>mismax)cout<<"Vasya"<<endl;
    else if(mismax>vasmax)cout<<"Misha"<<endl;
    else cout<<"Tie"<<endl;
}