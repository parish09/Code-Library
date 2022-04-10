#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
using namespace std;

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n,k;cin>>n>>k;
	string s;cin>>s;
	sort(s.begin(),s.end());
	char x=s[0];
	int c=1;
	string ans="";
	ans+=x;
	for(int i=1;i<s.size();i++){
	    if(c==k)break;
	    if(s[i]-x>=2){
	        x=s[i];
	        c++;
	        ans+=s[i];
	    }
	}
	int sum=0;
	fl(i,0,ans.size())sum+=(int)ans[i]-'a'+1;
	if(c!=k)cout<<-1;
	else cout<<sum;
	
}