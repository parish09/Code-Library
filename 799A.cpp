#include <iostream>

#include <string>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
typedef long long ll;
using namespace std;

int main(){
fast;tie;
    int s=0,n,t,k,d;cin>>n>>t>>k>>d;
    int a=ceil((float)n/k)*t;//cout<<a;
    //cout<<ceil(2);
    //cout<<a;
    //cout<<1%2;
    for(int i=1;i<a;i++){
        if(i%t==0)s=s+k;
        //cout<<s<<endl;
        if(i>=d){
            if(((i-d)!=0) and (i-d)%t==0)s=s+k;
        }
        //cout<<s<<endl;
    }
    //cout<<s;
    if(s>=n)cout<<"YES";
    else cout<<"NO";
}