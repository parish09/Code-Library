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
    int n,j=2;cin>>n;
    if(n%2!=0){
        cout<<-1;
        return 0;
    }
    for(int i=1;i<n;){
        cout<<j<<" ";
        cout<<i<<" ";
        i+=2;
        j+=2;

    }


}