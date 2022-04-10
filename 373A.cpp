#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
using ll=long long int;
using namespace std;

int main(){
    fast;tie;
    bool flag=true;
    int k;cin>>k;
    string arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    int freq[60];
    memset(freq,0,sizeof(freq));
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            int x=(int)arr[i][j];
            freq[x]++;
        }
    }
    for(int i=48;i<=57;i++){
        if(freq[i]>k*2){
            flag=false;
            break;
        }
    }
    if(flag==true)cout<<"YES";
    else cout<<"NO";
}