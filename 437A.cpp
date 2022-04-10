#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
using ll=long long int;
using namespace std;

int main(){
    fast;tie;
    int c=0;
    string arr[4];
    pair<int,char> num[4];
    num[0].second='A';
    num[1].second='B';
    num[2].second='C';
    num[3].second='D';
    for(int i=0;i<4;i++){
        cin>>arr[i];
        num[i].first=arr[i].length()-2;
    }
    sort(num,num+4);
    /*for(int i=0;i<4;i++){
        cout<<num[i].first<<num[i].second<<endl;
    }*/
    if((num[0].first*2)<=num[1].first)c++;
    if((num[2].first*2)<=num[3].first)c++;
//cout<<c;
    if(c==1){
        if((num[0].first*2)<=num[1].first)cout<<num[0].second;
        else if((num[2].first*2)<=num[3].first)cout<<num[3].second;
    }
    if(c==2 or c==0)cout<<'C';


}