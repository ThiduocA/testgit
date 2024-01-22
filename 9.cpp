#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int mp[100][100];
int a[1000], b[1000];


int main(){
	int m, n;
	cout << "Nhap m = "; cin >> m;
	for(int i = 1; i <= m; i++){
		cout << "a[" << i << "] = "; cin >> a[i];
	}
	cout << "Nhap n = "; cin >> n;
	for(int i = 1; i <= n; i++){
		cout << "b[" << i << "] = "; cin >> b[i];
	}
	//cout << "Day con co tong lon nhat = " << f1(m, n);
	for(int i = 0; i <= m; i++){
		for(int j = 0; j <= n; j++){
			if(i == 0 || j == 0) mp[i][j] = 0;
			else{
				if(a[i] == b[j]) mp[i][j] =  mp[i - 1][j - 1] + a[i];
				else mp[i][j] = max(mp[i - 1][j], mp[i][j - 1]);	
			}	
		}
	}
	cout << "Day con co tong lon nhat = " << mp[m][n] << endl;
	//inday(m,n);
	
	
}
