#include <iostream>
using namespace std;

int main()
{
	int t;
	int n;
	cin >> t;
	cin >> n;
    int** wo = new int*[t];
    for (int i = 0; i < t; i++) {
		wo[i] = new int[n];
			
	}

	int e;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < n; j++) {
			for (e = 0; e < n; e++) {
				cin >> e;
				wo[i][j] = e;
			}
		}
	}
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < n; j++) {
				cout<<wo[i][j]<<" ";
		}
	}


	//int sum;
	//for (int i = 0; i < t; i++) {
		//for (int j = 0; j < n-1; j++) {
			//sum = wo[i][j] + wo[i][j + 1];
			
		//}

	//}
	//cout << sum;
	
	//for (int i =2; i < 99; i++) {
		//if (sum / i) { cout << n << endl; 
		//for (int p = 0; p < t; p++) {
			///for (int j = 0; j < n; j++) {
					//cout<< wo[p][j];
				
			//}
		
		//}
	//}


	for (int i = 0; i < t; i++) {
		delete[] wo[i];

	}

	delete[]wo;
} 

	

//for (int l = 0; l < 99; i++) {
	//if (sum / l) {
	//	cout << j;
	//	for (int m = 0; m < j; m++)
	//		cout << wo[i][n];
	//}
	//else {
