#include <iostream>
#include <time.h>
using namespace std;
void delete_array(int** array, int n) {
	for (int i = 0; i < n; i++) {
		delete[] array[i];
	}
	delete[] array;
}

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
			array[i][j] = rand()%200-100;
		}
	}
}

void replace (int** array, int n, int m, int i) {
	int j_min = 0;
	int j_max = 0;
	for (int j = 0; j < n; j++) {
		if (array[i-1][j] > array[i-1][j_max]) {
			j_max = j;
		}
	}
	for (int j = 0; j < n; j++) {
		if (array[i][j] < array[i][j_min] ) {
			j_min = j;
			}
		}
	array[i][j_min] = array[i - 1][j_max];
	}

int main() {
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int n, m;
	cout << "Введите размерности прямоугольной таблицы: " << endl;
	cin >> n>>m;
	int** massive = new int* [n];
	for (int i = 0; i < n; i++) {
		massive[i] = new int[m];
	}
	random_array(massive, n, m);
	print_array(massive, n, m);
	for (int k = 1; k < n; k++) {
		replace(massive, n, m, k);
	}
	cout << endl;
	cout << "Измененная прямоугольная таблица: " << endl;
	print_array(massive, n, m);
	delete_array(massive,n);
}
