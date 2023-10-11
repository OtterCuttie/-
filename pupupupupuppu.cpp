// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    int mass[10];
    int sum = 0;
    int massLength = sizeof(mass) / sizeof(int);
    
    for (int i = 0; i < massLength; i++) {
        mass[i] = i + 1;
    }

    bool brk;

    for (int j = 0; j < massLength; j++) {
        for (int i = j; i < massLength; i++) {
            sum += mass[i];
        }
        for (int i = 2; i <= round(sqrt(sum)); i++) {
            if (sum % i == 0) {
                cout << "sum of number is compound";
                brk = false;
                int count = 0;
                for (int r = j; r < massLength;r++) {
                    cout << r;
                    count++;
                }
            }
        }
        if (brk == false) {
            break;
        }
        sum = 0;
    }

    return 0;
}

