#include<bits/stdc++.h>
using namespace std;
string a;
long long m,n;
int main(){
	//freopen("1.inp","r",stdin);
	//freopen("1.out","w",stdout);
	getline(cin,a);
	cin>>m;
	int length = a.length();
	for(int i=1;i<=m;i++){
		cin>>n;
		long long temp = n/length;
		long long vitri = n%length;
		if(n<temp){
			cout<<a[vitri]<<endl;
			continue;
		}
		
		if(temp%2 == 0){
			cout<<a[vitri]<<endl;
		}else{
			cout<<a[length - vitri-1]<<endl;
		}
	}
}
