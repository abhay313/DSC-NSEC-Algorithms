/**
 * @file: solution_push_zero.cpp
 * @brief: first push only non-zero numbers and count all zeros then push count number of zero's in the array. 
 * Time Complexity: O(n^2) when t = n
 * Space Complexity: O(n)
 * @author: [Abhay Singh Yadav](https://github.com/abhay313)
 */

#include<bits/stdc++.h>
using namespace std;

// Main function
int main()
{	
	int t, n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int arr[n], count = 0, k = 0, x;
		
		// filling array with non zero numbers only and counting zeros.	
		for(int i = 0; i < n; i++){
			cin >> x;
			if(x != 0){
				arr[k] = x;
				k++;
			}else
				count++;
		}
		// pushing count zeros	
		for(int i = 0; i < count; i++){
			arr[k] = 0;
			k++;
		}	
		
		// Display output	
		for(int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;	
	}
	return 0;
}
