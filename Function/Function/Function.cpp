#include<iostream>;
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	double x, y, b, z;
	cout << "Введите данные" << endl;
	cout << "Введите x" << endl;
	cin >> x;
	cout << "Введите y" << endl;
	cin >> y;
	cout << "Введите b" << endl;
	cin >> b;
	if ((b - y) > 0) {
		if ((b - x) >= 0) {
			z = (log(b - y)) * (sqrt(b - x));
			cout << "Функция равна: " << z << endl;
		}
		else {
			cout << "Подкоренное выражение меньше 0. Решений нет." << endl;
		}
	}
	else {
		cout << "Подлогарифмическое выражение меньше/равно 0. Решений нет." << endl;
	}
}