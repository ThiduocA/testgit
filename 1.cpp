#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	int first, count = 0, count1;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);

	for(int i = 0; i < n - 4; i++){
		first = a[i];
		//cout << a[i];
		for(int j = i + 4; j < n; j++){
			if((a[j] - a[i]) % 4 == 0){
				int kc = (a[j] - a[i]) / 4;
				int count1 = 0;
				
				for(int k = 1; k < 4; k++){
					if(binary_search(a + i, a + j, first)){
						first += kc;
						count1++;
					} 
					
					//cout << "dem: " << count1 << endl;
					if(count1 == 3){
						count++;
						
					}
					
				}
//				cout << " " << a[j];
				//cout << " kc: " << kc << " ";
			}
			//else break;
		}
//		cout << endl;
	}
	//cout << "So cach: " << count;
	cout << count;
}

