#include <iostream>
using namespace std;

int main() {
	long long n,c=0;cin>>n;
	bool flag=true;
	for(int i=1;i<=16;i++){
		long long x=n+i;
		c++;
		//cout<<x;
		while(x){
			int m=x%10;
			if(m==8 or m==-8){
				flag=false;
				break;
			}
			x=x/10;
		}
		if(flag==false)break;
		}
		cout<<c;
}