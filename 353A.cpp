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
//int t;cin>>t;
//while(t--){
    int n,sum_f=0,sum_s=0,c=0;cin>>n;
    pair<int,int> arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
        sum_f+=arr[i].first;
        sum_s+=arr[i].second;
    }
   // cout<<sum_f<<" "<<sum_s<<endl;
    if(sum_f%2==0 && sum_s%2==0)cout<<0;
    else{
        for(int i=0;i<n;i++){
            if((sum_f-arr[i].first+arr[i].second)%2==0 && (sum_s+arr[i].first-arr[i].second)%2==0){
                c++;
               // cout<<"HI";
                break;
            }
        }
        if(c>0)cout<<1;
        else cout<<-1;
    }




}
//}