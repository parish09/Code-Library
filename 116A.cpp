#include <iostream>
using namespace std;
int main(){
int n,a,b,B=0,max=0;cin>>n;
while(n--){
       cin>>a>>b;
       B+=(b-a);
       if((B)>max)max=B;
    }
    cout<<max<<endl;
}