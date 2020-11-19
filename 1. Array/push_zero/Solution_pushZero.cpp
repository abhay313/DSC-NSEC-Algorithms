#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int arr[n], count = 0, k = 0, x;
		
		// filling array with non zero numbers and counting zeros.
	
		for(int i = 0; i < n; i++){
			cin >> x;
			if(x != 0){
				arr[k] = x;
				k++;
			}else
				count++;
		}
		
		// pushing zeros
		
		for(int i = 0; i < count; i++){
			arr[k] = 0;
			k++;
		}
		
		// printing array
		
		for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
		cout << endl;
	}
	return 0;
}
