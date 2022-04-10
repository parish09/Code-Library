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
    int a=0,b=1,n,m1=INT_MAX,diff,x;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m2=arr[1]-arr[0];
    for(int i=1;i<n-1;i++){
        if(arr[i+1]-arr[i-1]<m1)m1=arr[i+1]-arr[i-1];
        if(arr[i+1]-arr[i]>m2)m2=arr[i+1]-arr[i];
    }
    if(m1<m2)m1=m2;
    cout<<m1;

}