#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
#define tie cin.tie(NULL);
using ll=long long int;
using namespace std;

int main(){
    fast;tie;
    int h,m;
    scanf("%d:%d",&h,&m);
    m++;
    if(m==60){m=0;
    h++;}
    while(h%10*10+h/10!=m){
        m++;
        if(m==60){
            m=0;
            h++;
        }
        if(h==24){
            m=0;
            h=0;
        }
    }
    printf("%.2d:%.2d",h,m);
}