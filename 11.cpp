#include<iostream>
using namespace std;

const int MAX = 100;
int a[MAX], k, c, count = 0;

void inday(){
	int sum = 0;
	for(int i = 1; i <= k; i++){
		sum += a[i];
		cout << a[i] << " ";
	}
	cout << "Tong = " << sum << endl;
}

void sinh(int k1, int temp){
	if(k1 > temp){
		inday();
		return;
	}
	for(int i = a[k - 1]; i <= k - temp + k1; i++){
		a[k1] = i;
		sinh(i + 1, temp);
	}
}

int main(){
	cout << "Nhap k = "; cin >> k;
	for(c = 2; c <= k; c++){
		sinh(1, c);
	}

}
