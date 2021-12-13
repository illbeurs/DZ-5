#include <iostream>
#include <time.h>
using namespace std;
void print_array(int** array, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}
void random_array(int** array, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			array[i][j] = rand() % 200 - 100;
		}
	}
}
pair <int, int> min_in_array(int** array, int n, int m) {
	int i_min = 0, j_min = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (array[i][j] < array[i_min][j_min]) {
				i_min = i; j_min = j;
			}
		}
	}
	return pair <int, int>(i_min, j_min);
}
void resh_array(int** array, int n, int m) {
	auto p = min_in_array(array, n, m);
	int a = p.first;
	int b = p.second;
	cout << endl << "Минимальный элемент матрицы: " << array[a][b] << endl;
	for (int i = a + 1; i < n; i++)  // смещаем все строчки вверх, замещая строку с минимальным элементом
		for (int j = 0; j < m; j++)
			array[i - 1][j] = array[i][j];

	for (int j = b + 1; j < m; j++) // то же самое со столбцами
		for (int i = 0; i < n; i++)
			array[i][j - 1] = array[i][j];
	cout << endl << "Измененная матрица: " << endl;
	print_array(array, n - 1, m - 1); // уменьшаем размер матрицы на 1, т.к крайние столбцы и строчки будут повторяться.

}
void delete_array(int** array, int n) {
	for (int i = 0; i < n; i++) {
		delete[] array[i];
	}
	delete[] array;
}

int main() {
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int n, m;
	cout << "Введите размерность матрицы: " << endl;
	cin >> n >> m;
	int** mas = new int* [n];
	for (int i = 0; i < n; i++) {
		mas[i] = new int[m];
	}
	random_array(mas, n, m);
	print_array(mas, n, m);
	resh_array(mas, n, m);
	delete_array(mas, n);
}
