#include<bits/stdc++.h>
using namespace std;

int a[50][50], m,n;

int main(){
	
	cout<<"Nhap M = ";
	cin>>m;
	cout<<"Nhap N = ";
	cin>>n;
	
	for(int i=0;i<=m;i++){
		a[i][0] = 1;
	}
	for(int j=0;j<=n;j++){
		a[0][j] = 1;
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			a[i][j] = a[i-1][j] + a[i][j-1];
		}
	}
	
	cout<<"So cach = "<<a[m][n];
}
