#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n, count = 0;
	cin >> n;
	const int Max = 200;
	int a[Max];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
//	for(int i = 0; i < n; i++){
//		cout << a[i] << " ";
//	}
//	1 2 3 4 5

	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			int d = a[j] - a[i];
			if(binary_search(a + i, a + n, a[j] + d) && binary_search(a + i, a + n, a[j] + d + d) && binary_search(a + i, a + n, a[j] +  d + d + d))
				count++;
				//cout << "3 so: " << a[i] + d << " " << a[i] + d + d << " " << a[i] + d + d + d;
				//cout << a[i] << " " << a[j] << " " << a[j] + d << " " << a[j] + d * 2 << " " << a[j] + d * 3 << endl;
		}
	}
	cout << count;
	
}
