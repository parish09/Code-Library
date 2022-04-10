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
    int n,m,h;cin>>n>>m>>h;
    int fv[m],tv[n][m],lv[n];
    fl(i,0,m)cin>>fv[i];
    fl(i,0,n)cin>>lv[i];
    fl(i,0,n)fl(j,0,m)cin>>tv[i][j];
    /*fl(i,0,m)cout<<fv[i]<<" ";
    cout<<endl;
    fl(i,0,n)cout<<lv[i]<<" ";
    cout<<endl;
    fl(i,0,n){
        fl(j,0,m){
            cout<<tv[i][j]<<" ";
        }
        cout<<endl;
    }*/
    fl(i,0,m){
        //cout<<fv[i]<<" ";
        if(fv[i]==0)continue;
        fl(j,0,n){
            //cout<<tv[j][i]<<" ";
            if(tv[j][i]==1 and lv[j]>=fv[i]){
                tv[j][i]=fv[i];
            }
            //cout<<tv[j][i]<<" ";
        }
    }//cout<<endl;
    fl(i,0,n){
        if(lv[i]==0)continue;
        fl(j,0,m){
            if(tv[i][j]==lv[i])break;
            /*if(tv[i][j]>lv[i]){
                tv[i][j]=lv[i];
                break;
            }*/
            fl(k,0,m){
                if(tv[i][k]==1)tv[i][k]=lv[i];
            }
        }
    }
	fl(i,0,n){
	    fl(j,0,m){
	        cout<<tv[i][j]<<" ";
	    }
	    cout<<endl;
	}
	
}