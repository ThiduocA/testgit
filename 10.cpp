#include<iostream>
#include<map>
using namespace std;

map<int, long long> nhap;

long long phuongan(int n){
	if(n == 0 || n == 1) return 1;
	if(n == 2) return 3;
	if(nhap[n] == 0) return nhap[n] = phuongan(n - 1) + 2 * phuongan(n - 2);
	else return nhap[n];
}

int main(){
	int n;
	cout << "N = "; cin >> n;
	cout << "So phuong an = " << phuongan(n);
}
