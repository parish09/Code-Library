#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    vector<int> vec;
    stringstream ss;
    ss<<str;
    for(int i=0;ss>>i;){
        vec.push_back(i);
        if(ss.peek()=='+'){
            ss.ignore();
        }
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        cout<<vec[i];
        if(i!=vec.size()-1) cout<<"+";
    }
    cout<<endl;
}