#include <iostream>
using namespace std;
int main(){
    int n,x,y,c=0;
    int arr[6][6];
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>n;
            arr[i][j]=n;
            if(n==1){
                x=i;y=j;
            }
        }
    }
    while(x!=3){
        c++;
        if(x>3)x--;
        else x++;
    }
    while(y!=3){
        c++;
        if(y>3)y--;
        else y++;
    }
    cout<<c;
}