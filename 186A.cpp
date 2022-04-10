#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
using ll=long long int;
using namespace std;

int main(){
    fast;tie;
    string x,y;cin>>x>>y;
    bool flag=true;
    if(x.length()!=y.length())cout<<"NO";
    else{
            //cout<<1;
        int xcnt[123],ycnt[123],c=0;
        memset(xcnt,0,sizeof(xcnt));
        memset(ycnt,0,sizeof(ycnt));
        for(int i=0;i<=x.length();i++){
            xcnt[(int)x[i]]++;
            ycnt[(int)y[i]]++;
        }
        for(int i=97;i<123;i++){
           // cout<<xcnt[i]<<" "<<ycnt[i]<<" "<<i<<endl;
            if(xcnt[i]!=ycnt[i]){
                flag=false;
                break;
            }
        }
        if(flag==false)cout<<"NO";
        else{
            // cout<<1;
            for(int i=0;i<x.length();i++){
                //cout<<x[i]<<" "<<y[i]<<endl;
                if(x[i]!=y[i])c++;
            }
            // cout<<c;
            if(c==2)cout<<"YES";
            else cout<<"NO";
        }
    }
}