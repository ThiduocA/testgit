#include<iostream>
#include<map>
using namespace std;
map<int, long long> nhap;
long long fibo(int n){
	long long k = n / 3;
	//long long f = fibo(2 * k);
	
	if(n == 0 || n == 1 || n == 2) return n;
	if(n % 3 == 0) {
		//int k = n / 3;
		if(nhap.count(n) == 0)
		nhap[n] = fibo(2 * k);
	}
	if(n % 3 == 1){
		//int k = (n - 1) / 3;
		if(nhap.count(n) == 0)
		nhap[n] =  fibo(2 * k) + fibo(2 * k + 1);
		
	} 
	if(n % 3 == 2){
		//int k = (n - 2) / 3;
		if(nhap.count(n) == 0)
		nhap[n] = fibo(2 * k) + fibo(2 * k + 1) + fibo(2 * k + 2);	
	}
	return nhap[n];
}

int main(){
	int n;
	cout << "Nhap n = "; cin >> n;
	cout << "f(" << n << ") = " << fibo(n);

}

