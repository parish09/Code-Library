#include <iostream>
using namespace std;
int main(){

    int n,ans=0,x,sum=0;cin>>n;
    while(n--){
    for(int i=0;i<3;i++){
        cin>>x;
        sum+=x;
    }
    if(sum>=2) ans++;
    sum=0;
    }
    cout<<ans;
}