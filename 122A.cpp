#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,p,x=0;cin>>m;
    n=m;
    while(n>0){
        p=n%10;
        if((p!=4 && p!=7)){
            x=1;
            break;

        }
        n=n/10;

    }
    if(x==0){
        cout<<"YES"<<endl;
        return 0;
    }
     if(m%4==0 || m%7==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}