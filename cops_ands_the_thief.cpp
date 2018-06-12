#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,x,y;
		cin>>m>>x>>y;
		int ans[100];
		int b[m];
		for(int i=0;i<m;i++)
			cin>>b[i];
		for(int i=0;i<100;i++)
			ans[i]=0;
		for(int i=0;i<m;i++){
			for(int j=b[i];j<b[i]+x*y;j++){
				if(j<100){
					ans[j]=1;
				}
				else
					break;
			}
			for(int j=b[i];j>=b[i]-x*y-1;j--){
				if(j>=0)
					ans[j]=1;
				else
					break;
			}

		}
		int count=0;
		for(int i=0;i<100;i++){
			if(ans[i]==0)
				count++;
		}
		cout<<count<<endl;
	}

	return 0;
}