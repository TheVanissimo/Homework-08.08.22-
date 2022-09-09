#include <iostream>;
#include <cmath>;
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	double x, a, w;
	cout << "Введите x" << endl;
	cin >> x;
	cout << "Введите a" << endl;
	cin >> a;
	if (double(abs(x)) < 1) {
		if (x != 0) {
			w = a * log(abs(x));
			cout << "Результат равен: " << w << endl;
		}
		else {
			cout << "Ошибка. Подлогарифмическое выражение равно 0. Решений нет" << endl;
		}
	}
	if (double(abs(x)) >= 1) {
		if ((a - x * x) >= 0) {
			w = sqrt(a - x * x);
			cout << "Результат равен: " << w << endl;
		}
		else {
			cout << "Ошибка. Подкоренное выражение меньше 0. Решений нет" << endl;
		}
	}
}
