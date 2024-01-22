#include<iostream>
using namespace std;


int main(){
	long long k, min = 0;
	cin >> k;
	
	if(k > 0){
		long long a[10000];
		a[0] = 0;
		a[1] = 1;
		a[2] = 1;
		int i = 3;
		while(i > 0){
			a[i] = a[i - 1] + a[i - 2];
			if(a[i] > k){
				min = a[i];
				break;
			}
			i++;
		}
		cout << min;
	}
	else cout << 0;
}
