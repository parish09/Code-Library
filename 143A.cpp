#include <iostream>
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
//using ll=long long int;
using namespace std;

int main(){
fast;tie;
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    int w=0,x=0,y=0,z=0;
    for(int i=1;i<10;i++){
        if(z!=0)break;
        w=i;
        for(int j=1;j<10;j++){
            if(z!=0)break;
            if((j+w)==r1){
                x=j;
                for(int k=1;k<10;k++){
                    if(z!=0)break;
                    if((k+x)==c2 && (k+w)==d1){
                        y=k;
                        for(int l=1;l<10;l++){
                            if(z!=0)break;
                            if((l+x)==d2 && (l+w)==c1 &&(l+y)==r2){
                                //cout<<endl<<l<<x<<d2<<" "<<l<<w<<c1<<endl;
                                z=l;
                                break;
                            }
                        }

                }
            }
        }
    }

    }
    if(z!=0 && w!=x && w!=y && w!=z && x!=y && x!=z && y!=z&& w<10 && x<10 && y<10 && z<10)cout<<w<<" "<<x<<endl<<z<<" "<<y<<endl;
    else cout<<-1;
}