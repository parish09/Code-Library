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
    int n;cin>>n;
    pair<int,int> arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        if(arr[i].second>arr[i+1].second){
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
}