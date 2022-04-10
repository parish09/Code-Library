#include <iostream>
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define endl '\n'
#define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define printv(v) for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define mod 1000000007
#define ln length()
#define sz size()
#define line cout<<'\n';
/***********************************************************************/
using namespace std;
const int N=0;
int pre[N];
void pre_comp(){
    
}
void solve(){
    int a,b;cin>>a>>b;
    vector<int> ans;
    bool flag=true;
    while(b){
    	int x=a%10,y=b%10;
    	if(x<=y)ans.pb(y-x);
    	else{
    		b=b/10;
    		y=y+10*(b%10);
    		if(y>=10 and y<=18)ans.pb(y-x);
    		else{
    			cout<<-1<<endl;
    			return;
    		}
    	}
    	b=b/10;
    	a=a/10;
    }
    if(a)cout<<-1<<endl;
    else{
    	while(ans.back()==0)ans.pop_back();
    	fld(i,ans.size()-1,0)cout<<ans[i];
    	cout<<endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    pre_comp();
    int t;
    cin>>t;
    //t=1;
    while(t--){
        solve();
    }
}