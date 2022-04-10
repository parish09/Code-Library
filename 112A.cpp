#include <iostream>
    #include <string>
    #include <sstream>
    #include <vector>
    #include <bits/stdc++.h>
    using namespace std;
        int main(){
        string str,s;cin>>str>>s;
        bool flag=false;
        transform(str.begin(),str.end(),str.begin(),::tolower);
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(int i=0;i<s.length();i++){
        	if(str[i]<s[i]){
        		cout<<-1;
        		flag=true;
        		break;
        	}
        	else if(str[i]>s[i]){
        		cout<<1;
        		flag=true;
        		break;
        	}
        	
        }
        if(flag==false)cout<<0;
    }