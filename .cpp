#include <iostream>
#include <windows.h>;
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int row = 3;
	const int columns = 3;
	int matrix_a[row][columns], matrix_b[row][columns], res[row][columns];

	cout << "Елементи першої матриці:" << endl;
	for (int a = 0; a < row; ++a) {
		for (int b = 0; b < columns; ++b) {
			cin >> matrix_a[a][b];
		}
	}
	cout << "Елементи другої матриці:" << endl;
	for (int a = 0; a < row; ++a) {
		for (int b = 0; b < columns; ++b) {
			cin >> matrix_b[a][b];
		}
	}
	for (int a = 0; a < row; ++a) {
		for (int b = 0; b < columns; ++b) {
			res[a][b] = matrix_a[a][b] + matrix_b[a][b];
		}
	}
	cout << "Результат додавання" << endl;
	for (int a = 0; a < row; ++a) {
		for (int b = 0; b < columns; ++b) {
			cout << res[a][b] << " ";
		}
		cout << endl;
	}
	return 0;
}
