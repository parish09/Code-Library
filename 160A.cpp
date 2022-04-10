#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,x;cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
        sum+=vec[i];
    }
    sort(vec.begin(),vec.end(),greater<int>());
    int a=0,b=sum/2,i=0;
    //if(sum%2!=0)b++;
    while(b+1>a){
        a=a+vec[i];

        ++i;
    }
    cout<<i;
}