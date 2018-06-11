#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
			int n,total,s=0;
			cin>>n>>total;
			for (int i=0;i<n;i++){
			int x;
			cin>>x;
			s=s+x;

			}
			if(total>=s)
			cout<<"Yes"<<endl;
			else
			cout<<"No"<<endl;
	}

	return 0;
}