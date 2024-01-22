#include<bits/stdc++.h>
using namespace std;
int x[1000];
int n,m,sum=0, tich;

void thu(int u,int temp){
	if(sum == n){
		//tich = 1;
		x[u] = n-sum;
		cout<<n<<" = "<<x[1];
		for(int i=2;i<=u-1;i++){
			cout<<"+"<<x[i];
			//tich *= x[i];
			
		}
		cout << endl;
		//cout << " Tich = " << tich <<endl;
	}else{
		for(int i=temp;i>=1;i--){
			x[u] = i;
			sum+=i;
			if(sum<=n){
				thu(u+1,i);
			}
			sum-=i;
		}
	}
}



int main(){
	cout<<"Nhap n = ";
	cin>>n;
	thu(1,n);
}
