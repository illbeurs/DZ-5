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
			array[i][j] = rand() % 6;
		}
	}
}
void mult_array(int** array1, int** array2, int n, int m, int a, int b) {
	int** product = new int* [n]; //матрица которая получится в результате перемножения исходных
	for (int i = 0; i < n; i++) {
		product[i] = new int[b];
	}
	for (int i = 0; i < n; i++) { //первоначально обнуляем эту матрицу
		for (int j = 0; j < b; j++) {
			product[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) { //умножение матриц путем фиксирования i-той строки первой матрицы и умножением на j-тые столбцы 2-й матрицы)
		for (int j = 0; j < b; j++) {
			for (int k = 0; k < m; k++) {
				product[i][j] += array1[i][k] * array2[k][j];
			}
		}
	}
	cout << endl << "Матрица, получившаяся в результате перемножения исходных: " << endl;
	print_array(product, n, b);
	delete[]product;


}

int main() {
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int n, m;
	cout << "Введите размерность первой матрицы: " << endl;
	cin >> n >> m;
	int** mas1 = new int* [n];
	for (int i = 0; i < n; i++) {
		mas1[i] = new int[m];
	}
	random_array(mas1, n, m);
	int a, b;
	cout << "Введите размерность второй матрицы: " << endl;
	cin >> a >> b;
	int** mas2 = new int* [a];
	for (int i = 0; i < a; i++) {
		mas2[i] = new int[b];
	}
	random_array(mas2, a, b);
	print_array(mas1, n, m);
	cout << endl;
	print_array(mas2, a, b);
	if (m == a) {
		mult_array(mas1, mas2, n, m, a, b);
	}
	else { 
		cout <<endl<< " Умножение данных матриц невозможно";
		return 0; 
	}
	delete[]mas1;
	delete[]mas2;
}
