        #include <iostream>
        #include <bits/stdc++.h>
        #define fast ios_base::sync_with_stdio(false);
        #define tie cin.tie(NULL);
        using ll=long long int;
        using namespace std;
         
        int main(){
            fast;tie;
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
            int arr[5];
            memset(arr,0,sizeof(arr));
            int n,a,b,temp=0;cin>>n;
            arr[n]=1;
            for(int i=0;i<3;i++){
                cin>>a>>b;
                temp=arr[a];
                arr[a]=arr[b];
                arr[b]=temp;
            }
            for(int i=1;i<4;i++){
                if(arr[i]==1){
                    cout<<i<<endl;
         
                }
            }
            return 0;
        }