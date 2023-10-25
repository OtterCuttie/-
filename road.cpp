#include <iostream>
using namespace std;

int main() {
	int const y = 3, x = 6;
	int arr[y][x];
	int n = 3;
	for (int i=0; i < y; i++) {
		for (int j=0; j < x; j++) {
			arr[i][j] = 1;
		}
	}
	for (int i=0; i < y; i++) {
		for (int j=0; j < x; j++) {
			
			arr[i][j] = 1;
		}
	}
	bool tf = true;
	while (tf = true) {
		for (int i=0; i < y; i++) {
			int str = 0;
			int end = 0;
			for (int j=0; j < x; j++) {
				if (arr[i][j] == 1) {
					str = y;
				}
				if (arr[i][j] == 1 and y > str) {
					end = y;
				}
				cout << str << end;
				tf = false;
			}
		}
	}


}
