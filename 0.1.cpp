#include<iostream>
#include<map>
using namespace std;
map<long long, long long> nhap;

long long fibo(long long n){
	if(n == 0 || n == 1) return n;
	if(nhap.count(n) == 0) nhap[n] = fibo(n - 1) + fibo(n - 2);
	return nhap[n];
}

int main(){
	long long k;
	cin >> k;
	for(long long i = 0; ; i++){
		if(fibo(i) > k){
			cout << fibo(i);
			break;
		}
	}
}
