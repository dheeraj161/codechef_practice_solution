#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		char s[1000];
		cin>>s;
		int l=strlen(s);
		int x=l/2;
		sort(s,s+x);
		int a;
		if(l%2==0){
			sort(s+x,s+l);
			a=x;
		}
		else{
			sort(s+x+1,s+l);
			a=x+1;
		}

		int c=0;
		for(int i=0;i<x;i++){
			if(s[i]!=s[i+a]){
				c=1;
				break;
			}
		}
		if(c)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;



	}


	return 0;
}