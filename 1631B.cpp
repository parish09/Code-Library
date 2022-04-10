    #include <iostream>
    #include<bits/stdc++.h>
    #define int long long
    #define pb push_back
    #define endl '\n'
    #define fl(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
    #define fld(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
    #define mod 1000000007
    using namespace std;
    const int N=1;
    int pre[N];
    void pre_comp(){
        
    }
    void solve(){
        int n;cin>>n;int arr[n];fl(i,0,n)cin>>arr[i];
        int mxl=(n+1)/2;
        // mxl*=2;
        int e=n-1,s=n-2,dec=2,c=0,cmp=arr[n-1];
         while(s>=0){
         	bool flag=false;
         	fl(i,s,e+1){
         		//cout<<i<<" ";
         		if(arr[i]!=cmp){
         			flag=true;
         			//cout<<arr[i];
         			arr[i]=cmp;
         		}
         	}
         	cout<<endl;
        	
         		if(flag==true)c++;
         	s=s-(dec);
         	dec*=2;
         }
        bool flag=false;
        
        /*int x=0;
        for(int i=n-1;i>=0;i--){
        	if(arr[i]==cmp)x++;
        	else{
        		c++;
        		x=x*2;
        		i=n-x;
        	}
        }*/
        fl(i,0,n/2+1){
        	if(arr[i]!=cmp){
        		c++;
        		break;
        	}
        }
        if(n==1)c=0;
        cout<<c<<endl;
        
    }
     
    int32_t main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        pre_comp();
        int t;cin>>t;
        while(t--){
            solve();
        }
    }