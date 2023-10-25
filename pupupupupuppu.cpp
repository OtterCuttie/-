#include <iostream>
using namespace std;

int main() {
	int n, m=0;
	cin >> n, m;
	int** mass = new int* [n];

	int sum = 0;
	int massLength = sizeof(mass) / sizeof(int);
	
    for (int i = 0; i < n; i++) {
		mass[i] = new int[m];
	}
	for (int j = 0; j < n;j++) {
		bool brk = true;
		int gogo = 0;
		for (int i = 0; i < massLength; i++) {
			sum += mass[j][i];
		}
		for (int i = 2; i <= round(sqrt(sum)); i++) {
			if (sum % i == 0) {
				cout << "sum of number is compound ";
				brk = false;
				int count = 0;
				for (int r = 0; r < massLength; r++) {
					cout << r;
					count++;
				}
				break;
			}

		}

		if (brk) {
			for (int i = 0; i < massLength; i++) {
				cout << "sum of number is NOT compound";
				if (mass[j][i] % 2 != 0 and mass[j][i] != 2) {
					cout << /*sum - mass[i] << endl << */ massLength - 1 << endl;
					gogo = mass[j][i];
					for (int k = 0; k < massLength; k++) {
						if (mass[j][k] != gogo) {
							cout << j << " ";
							break;
						}
						break;
					}
				}
			}
		}

		sum = 0;
	}
	return 0;
}
