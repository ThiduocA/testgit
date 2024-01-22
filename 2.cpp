#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
//	for(int j = 0; j < n; j++){
//		cout << a[j];
//	}
	int count = 1;
	for(int i = 0; i < n - 1; i++){
		if(a[i] == 0) count = count;
		//else if(a[i] == a[i + 1]) count = count;
		else if(a[i] <= a[n - 1]) count++;
		
		
		if(count == (a[n - 1] + 1)) break;
	}
	cout << count;
	//100 100 100 100 100 100 100 100 100 100
	// 0  1   2   3   4   5   6   7   8   9
	// 2  3   4   5   6   7   8   9   10
}
