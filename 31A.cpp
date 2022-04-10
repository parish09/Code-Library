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
    int n,a,b,c;cin>>n;
    bool flag=false;
    pair<int,int> arr[n];
    for(int i=0;i<n;i++){
            cin>>arr[i].first;
            arr[i].second=i;
    }
    sort(arr,arr+n);
    for(int i=n-1;i>1;i--){
        for(int j=0;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(arr[j].first+arr[k].first==arr[i].first){
                    a=i,b=j,c=k;
                    flag=true;
                    break;
                }
            }
            if(flag==true)break;
        }
        if(flag==true)break;
    }
    //cout<<arr[a]<<" "<<arr[b]<<" "<<arr[c]<<endl;
    if(flag==true)cout<<arr[a].second+1<<" "<<arr[b].second+1<<" "<<arr[c].second+1;
    else cout<<-1;
}