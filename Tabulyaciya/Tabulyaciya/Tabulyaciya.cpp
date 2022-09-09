#include<iostream>;
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	double x, y;
	for (float x = -4; x <= 4; x += 0.5)
		if (x != 1) {
			y = (x * x - 2 * x + 2);
			cout << "y=" << y << " x=" << x << endl;
		}
		else {
			cout << "Ошибка. Знаменатель равен нулю. Решений нет " << "x=" << x << endl;
		}
}