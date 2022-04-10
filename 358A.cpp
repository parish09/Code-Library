#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
//using ll=long long int;
using namespace std;

int main(){
fast;tie;
int t;cin>>t;
    int arr[t];
    bool flag=false;
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    for(int i=0;i<t-2;i++){
        for(int j=i;j<t-2;j++){
            int a,b,c,d;
            if(arr[i+1]>arr[i]){
                a=arr[i];
                b=arr[i+1];
            }
            else{
                b=arr[i];
                a=arr[i+1];
            }
            if(arr[j+2]>arr[j+1]){
                c=arr[j+1];
                d=arr[j+2];
            }
            else{
                d=arr[j+1];
                c=arr[j+2];
            }
            if(a<c && c<b && b<d)flag=true;
            else if(c<a && a<d && d<b) flag=true;
            if(flag==true)break;
        }
        if(flag==true)break;
    }
    if(flag==true)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}