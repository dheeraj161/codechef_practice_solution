#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[7],x=1,c[7],y=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<7;i++){
			b[i]=0;
			c[i]=0;
		}
		for(int i=0;i<n;i++){
			if(x>7){
				y=1;
				break;
			}
			if(a[i]==x){
				b[x-1]=b[x-1]+1;
			}
			else if(a[i]==x+1){
				x++;
				if(a[i]==x)
					b[x-1]=b[x-1]+1;
			}

			else{
				break;
			}
			

		}
		x=1;
		for(int j=n-1;j>0;j--){
			if(y==1)
				break;
			if(a[j]==x){
				c[x-1]=c[x-1]+1;
			}
			else if(a[j]==x+1){
				x++;
				if(a[j]==x)
					c[x-1]=c[x-1]+1;
			}
			else{
				break;
			}
			
		}
		int p=0;
		for(int k=0;k<7;k++){
			if(y==1)
				break;
			if(b[k]!=c[k] || b[k]==0){
				p=1;
				break;
			}
		}

		
		if(p==0 && y==0)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;

		
	}



	return 0;
}