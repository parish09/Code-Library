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
    string s;getline(cin,s);
    int l=s.length()-2;

    while(s[l]==' '){
        l--;
    }
    //cout<<s[l];
    if(s[l]=='A' or s[l]=='E' or s[l]=='I' or s[l]=='O' or s[l]=='U' or s[l]=='Y' or
       s[l]=='a' or s[l]=='e' or s[l]=='i' or s[l]=='o' or s[l]=='u' or s[l]=='y'){
        cout<<"YES";
       }
    else cout<<"NO";
}