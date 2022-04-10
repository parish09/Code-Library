#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
#include <stdio.h>
using ll=long long int;
using namespace std;
int main(){
    int n=3;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=sqrt((arr[0]*arr[2])/arr[1]);
    int b=sqrt((arr[1]*arr[2])/arr[0]);
    int c=sqrt((arr[0]*arr[1])/arr[2]);
   //4 cout<<a<<b<<endl;
    cout<<4*(a+b+c);
}
//}