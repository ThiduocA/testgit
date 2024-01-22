#include<bits/stdc++.h>
using namespace std;
int x[1000];
int n,m,sum=0;
void out(){
	cout<<n<<" = "<<x[1];
	for(int i=2;i<=m;i++){
		cout<<"+"<<x[i];
	}
	cout<<endl;
}

void thu(int u){
	if(u == m){
		x[u] = n-sum;
		out();
	}else{
		for(int i=1;i<=n-sum;i++){
			x[u] = i;
			sum+=i;
			if(sum<n){
				thu(u+1);
			}
			sum-=i;
		}
	}
}

int main(){
	cout<<"Nhap n = ";
	cin>>n;
	cout<<"Nhap m = "; 
	cin>>m;
	
	thu(1);
}
