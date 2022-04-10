#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
//using ll=long long int;
using namespace std;

int main(){
fast;tie;
    int t,c=0;cin>>t;
    bool check;
    string arr[11]={"ABSINTH","BEER","BRANDY","CHAMPAGNE","GIN","RUM","SAKE","TEQUILA","VODKA","WHISKEY","WINE"};
    for(int i=0;i<t;i++){
        check=false;
        string x;cin>>x;
        for(int j=0;j<11;j++){
            if(x==arr[j]){
                check=true;
            }
        }
        if(check==false){
            if(x.length()==2 and (x[0]==49 and x[1]<56))check=true;
            else if(x.length()==1 and (x[0]>=48 and x[0]<=57))check=true;
        }
        if(check==true)c++;
    }
    cout<<c;
}