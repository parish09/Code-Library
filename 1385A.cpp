#include<iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,inp;cin>>t;
    while(t--){
        vector<int> vec;
        //for(auto &it:vec) cin>>it;
        for(int i=0;i<3;i++){
            cin>>inp;
            vec.push_back(inp);
        }
        sort(vec.begin(),vec.end());
        if(vec[1]!=vec[2])cout<<"NO"<<endl;
        else cout<<"YES"<<endl<<vec[0]<<" "<<vec[0]<<" "<<vec[2]<<endl;
    }
}