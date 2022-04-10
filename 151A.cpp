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
    int n,k,l,c,d,p,nl,np;cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink=k*l/nl;
    int limes=c*d;
    int salt=p/np;
    cout<<min(min(drink,limes),salt)/n;

}