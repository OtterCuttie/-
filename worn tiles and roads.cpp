#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int const X = 5;
	int const Y = 4;
	int mass[X][Y];
	int n = 5;
	//рандомно ломаем плитки
	srand(time(nullptr));
	for (int x = 0; x < X; x++){
		for (int y = 0; y < Y; y++) {
			int randomNum = rand() % 5 - 1;
			if (randomNum == 1 or randomNum == 2) {
				mass[x][y] = 1;
			}
			else {
				mass[x][y] = 0;
			}
		}
	}
	//вывод массива
	for (int x = 0; x < X; x++){
		for (int y = 0; y < Y; y++) {
			cout << mass[x][y] << " ";
		}
		cout << endl;
	}
	//нахождение расстояние между "сломаннными плитками" горизонтально и вертикально 
	for (int x = 0; x < X; x++){
		int start = 0;
		int end = 0;
		int k = 0;
		bool isStart = false;
		for (int y = 0; y < Y; y++) {
			if (mass[x][y] == 1) {
				k++;
			}
			//start 
			if (mass[x][y] == 1 and isStart != true) {
				start = y;
				isStart = true;
			}
			//end
			if (mass[x][y] == 1 and y > start) {
				end = y;
				break;
			}
		}
		if (end - start > 0) {
			cout << "Horizontally" << endl;
			cout << "Start: " << start << " End: " << end << " Width: " << end - start + 1 << endl;
		}
		//если у нас больше чем две сломанных плиток 
		if (k>2) {
			//повторяем столько раз сколько количество сломманых плиток больше чем два ( 3 сломманых плитки 3-2=1 повтрояется один раз) 
			for (int h = 0; h < k - 2; h++) {
				start == end;
				//находим новый end
				for (int g = end + 1; g < Y; g++) {
					if (mass[x][g] == 1 and g > start) {
						end = g;
						break;
					}
				}
				if (end - start > 0) {
					cout << "Horizontally" << endl;
					cout << "Start: " << start << " End: " << end << " Width: " << end - start + 1 << endl;
				}
			}
			//задумка была в том что мы находим минимальную ширину между всеми сломанными плитками, 
			// но как мы будем запоминать значения и сравнивать их между собой? 
			// У нас нет определеного количества width чтобы каждый раз создавать переменные 
		}
	}
}
