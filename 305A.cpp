#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
//using ll=long long int;
using namespace std;


int main(){
fast;tie;
    int n,x,arr[5];cin>>n;
    memset(arr,0,sizeof(arr));
    //for(int i=0;i<5;i++)cout<<arr[i];
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==0){
            arr[0]=1;
            continue;
        }
        if(x==100){
            arr[1]=1;
            continue;
        }
        if(x%10==0){
            arr[2]=x;
            continue;
        }
        if(x>0 and x<10){
            arr[3]=x;
            continue;
        }
        arr[4]=x;
    }
    if(arr[0])v.push_back(0);
    if(arr[1])v.push_back(100);
    if(arr[2])v.push_back(arr[2]);
    if(arr[3])v.push_back(arr[3]);
    if(!arr[2] and !arr[3] and arr[4])v.push_back(arr[4]);

    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}