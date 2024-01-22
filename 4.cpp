#include<iostream>
#include<map>
using namespace std;
map<int, long long> nhap;

long long g(int n){
	if(n == 1 || n == 3) return n;
	if(n % 2 == 0){
		int k = n / 2;
		if(nhap.count(n) == 0) nhap[n] = g(k);
		//return g(k);
	}
	if(n % 4 == 1){
		int k = (n - 1) / 4;
		if(nhap.count(n) == 0) nhap[n] = 2 * g(2 * k + 1) - g(k);
	}
	if(n % 4 == 3){
		int k = (n - 3) / 4;
		if(nhap.count(n) == 0) nhap[n] = 3 * g(2 * k + 1) - 2 * g(k);
	}
	return nhap[n];
}

int main(){
	int n;
	cout << "Nhap n = "; cin >> n;
	cout << "g(" << n << ") = " << g(n);
	

}
