#include<iostream>

#include<string.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		string s;
		cin>>s;
		long long c=0;
		for(long long i=0;i<n;i++){
			if(s[i]=='1')
				c++;
		}
		long long ans=(c*(c+1))/2;
		cout<<ans<<endl;
	}

	return 0;
}