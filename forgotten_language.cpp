#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		string s[n];
		int ans[n];
		for(int i=0;i<n;i++)
			ans[i]=0;
		for(int i=0;i<n;i++)
			cin>>s[i];
		for(int i=0;i<m;i++){
			int x;
			cin>>x;
			string s1[x];
			for(int j=0;j<x;j++){
				cin>>s1[j];
				for(int k=0;k<n;k++){
					if(s[k].compare(s1[j])==0)
						ans[k]=1;
				}
			}

		}
		for(int i=0;i<n;i++){
			if(ans[i]==0)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}
	}

	return 0;
}
