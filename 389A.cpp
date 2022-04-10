#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <stdio.h>
using ll=long long int;
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    while(arr[0]!=arr[n-1]){
        //cout<<arr[0]<<" "<<arr[n-1]<<endl;
        for(int i=n;i>0;i--){
            if(arr[i]!=arr[i-1]){
            arr[i]=arr[i]-arr[i-1];
            }
        }
        sort(arr,arr+n);
    }
    cout<<arr[0]*n;
}
//}