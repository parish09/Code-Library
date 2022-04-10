#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <stdio.h>
using namespace std;
int main(){
    int n,c=0;cin>>n;
    char arr[n][n];
    bool flag=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    if(arr[0][0]==arr[0][1]){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n;j++){
            if(arr[i][c]!=arr[0][0]){
                cout<<"NO";
                return 0;
            }
            if(arr[i][n-c-1]!=arr[0][0]){
                cout<<"NO";
                return 0;
            }
            if(arr[i][j]!=arr[0][1]&&j!=c && j!=n-c-1){
                cout<<"NO";
                return 0;
            }
        }
        c++;
    }
    if(arr[n/2][n/2]!=arr[0][0]){
        cout<<"NO";
        return 0;
    }
    for(int j=0;j<n;j++){
        if(arr[n/2][j]!=arr[0][1]&&j!=c && j!=n-c-1){
            cout<<"NO";
            return 0;
    }}
    c=0;
    for(int i=n-1;i>n/2;i--){
        for(int j=0;j<n;j++){
            if(arr[i][c]!=arr[0][0]){
                cout<<"NO";
                return 0;
            }
            if(arr[i][n-c-1]!=arr[0][0]){
                cout<<"NO";
                return 0;
            }
            if(arr[i][j]!=arr[0][1]&&j!=c && j!=n-c-1){
                cout<<"NO";
                return 0;
            }
        }
        c++;
    }
    cout<<"YES";


}