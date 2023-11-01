
#include <iostream>
using namespace std;

int main() {
	setlocale(0,"");
	int n, m = 0;
	cin >> n;
	int** mass = new int* [n];

	int sum = 0;
	int massLength = 0;

	for (int j = 0; j < n;j++) {

		//вводим количество элементов и создаем, рассчитываем длину массива
	    cin >> m;
		mass[j] = new int[m];
		massLength = sizeof(mass[j]) / sizeof(int);

		//вводим элементы
		for (int i = 0; i < m; i++) {
			cin >> mass[j][i];
		}

		bool brk = true;
		int gogo = 0;
		
		//танцы с бубнами вокруг суммы
		//складываем
		for (int i = 0; i < massLength; i++) {
			sum += mass[j][i];
		}

		for (int i = 2; i <= round(sqrt(sum))+1; i++) {
		//если число суммы составное
			if (sum % i == 0) {
				cout << "sum of number is compound " << endl;;
				brk = false;
				int count = 0;
				cout << "Количество элементов:" << massLength << endl;
				cout << "Индексы элементов:";
				for (int r = 0; r < massLength; r++) {
					cout << r + 1 << " ";
					count++;
				}
				break;
			}

		}
		//если не составное
		if (brk==true) {
			for (int i = 0; i < massLength; i++) {
				cout << "sum of number is NOT compound"<<endl;
				if (mass[j][i] % 2 != 0 and mass[j][i] != 2) {
					//выводим длину подмножества
					cout << /*sum - mass[i] << endl << */"Количество элементов:" << massLength - 1 << endl;
					//первое попашееся нечетное число принмаем за гого и выводим индексы элементов подмножества
					gogo = mass[j][i];
					cout << "Индексы элементов:";
					for (int k = 0; k < massLength; k++) {
						if (mass[j][k] != gogo) {
							cout <<  k+1 << " ";
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