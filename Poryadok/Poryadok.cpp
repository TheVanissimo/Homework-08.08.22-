#include <iostream>;
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	int A;
	cout << "Введите точку отсчета" << endl;
	cin >> A;
	for (int counter = A; counter < A+10; counter ++)
		cout << " " <<counter;
	cout << endl;
}