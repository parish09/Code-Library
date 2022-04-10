#include <iostream>
using namespace std;
int main(){
    int n,a=0;cin>>n;
    string s;
    while(n--){
        cin>>s;
        if(s=="++X") ++a;
        if(s=="X++") a++;
        if(s=="--X") --a;
        if(s=="X--") a--;
    }
    cout<<a<<endl;
}