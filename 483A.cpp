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
    unsigned long long int l,r;cin>>l>>r;
    if(l%2!=0)l++;
    if(l+2>r)cout<<-1;
    else cout<<l<<" "<<l+1<<" "<<l+2;
}