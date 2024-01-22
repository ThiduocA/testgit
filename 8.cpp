#include<iostream>

int a[1005],f[1005][1005];
int m,n;
using namespace std;

int main(){
	int m, n, count = 0;
	cout << "Nhap m = "; cin >> m;
	cout << "Nhap n = "; cin >> n;
	int a[n];
	int sum1 = 0, sum2 = 0;
	for(int i = 1; i <=n; i++){
		cout << "a[" << i-1 << "] = "; cin >> a[i];
	}
	for(int i=0;i<=n;i++)f[i][0]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			f[i][j] = f[i-1][j];
			if(j>=a[i]){
				f[i][j] += f[i-1][j-a[i]];
			}	
		}
	}
	cout << "Co tat ca " << f[n][m] << " cach phan tich.";
	
	//12 13 14 123 124 134
	//23 24 234
	//34
}
