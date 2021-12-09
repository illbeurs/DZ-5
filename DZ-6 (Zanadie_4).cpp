#include <iostream>
#include <time.h>
using namespace std;

void print_array(int** array, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << array[i][j] << " ";
		}
		cout<<  endl;
	}
}

void random_array(int** array, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			array[i][j] = rand()%19-9;
		}
	}
}

pair <int, int> min_in_array(int** array, int n) {
	int i_min, j_min;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (array[i][j] > 0) {
				i_min = i;
				j_min = j;
				break;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((array[i][j] < array[i_min][j_min]) and (array[i][j] > 0)) {
				i_min = i; j_min = j;
			}
		}
	}
	cout << "Минимальный положительный элемент: " << array[i_min][j_min] << endl;
	return pair <int, int>(i_min, j_min);
}

void replace_mas(int** array, int n) {
	auto p = min_in_array(array, n);
	int i_min = p.first;
	int j_min = p.second;
	int count = 0;
	for (int i = 0; i < n; i++) {
		swap(array[count][j_min], array[i_min][count]);
		count++;
	}
}

int main() {
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размерность квадратной таблицы: " << endl;
	cin>> n;
	int** massive = new int* [n];
	for (int i = 0; i < n; i++) {
		massive[i] = new int[n];
	}
	random_array(massive, n);
	print_array(massive, n);
	cout << endl;
	replace_mas(massive, n);
	cout << "Измененная квадратная таблица: " << endl;
	print_array(massive, n);
}
