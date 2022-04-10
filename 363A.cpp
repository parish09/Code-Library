#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
using ll=long long int;
using namespace std;

int main(){
    fast;tie;
    int n;cin>>n;
    if(n==0)cout<<"O-|-OOOO";
    else{while(n){
        int m=n%10;
        if(m>=5){
            cout<<"-O|";
            m=m-5;
        }
        else cout<<"O-|";
        for(int i=0;i<m;i++){
            cout<<'O';
        }
        cout<<'-';
        for(int i=0;i<4-m;i++){
            cout<<'O';
        }
        cout<<endl;
        n=n/10;}
    }


}