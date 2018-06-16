#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
int main(){
	
	int t;
	cin>>t;
	while(t--){
		string s;
		stack <char > ss;
		cin>>s;
		long long a=0,r=0;
		long long l=s.length();
		for(long long i=0;i<l;i++){
			if(s[i]=='<')
				ss.push('<');
			else{
				if(!ss.empty()){
					a=a+2;
					ss.pop();
				}
				else
					break;
			}
			if(ss.empty()){
				r=r+a;
				a=0;
			}
		}
		cout<<r<<endl;

	}


	return 0;
}