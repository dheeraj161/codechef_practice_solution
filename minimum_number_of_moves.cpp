#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int s=0;
		for (int i=0;i<n;i++){
			cin>>arr[i];
			s=s+arr[i];
		}
		int max_number=arr[0],min_number=arr[0];
		for (int i=0;i<n;i++){
			if(max_number<arr[i])
				max_number=arr[i];
			if(min_number>arr[i])
				min_number=arr[i];

		}
		int minimum_moves=s-n*min_number;
		cout<<minimum_moves<<endl;
		
	}

	return 0;
}