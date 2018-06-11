#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,y,k;
		cin>>x>>y>>k>>n;
		int p[n],c[n];
		for (int j=0;j<n;j++){
			cin>>p[j];
			cin>>c[j];
		}
		int ans=0;
		for (int j=0;j<n;j++){
			if(x-y<=p[j]){
				if(k>=c[j]){
					ans=1;
					break;
				}
			}
		}


		if(ans==1)
			cout<<"LuckyChef"<<endl;
		else
			cout<<"UnluckyChef"<<endl;

	}

	return 0;
}