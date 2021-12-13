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
            array[i][j] = rand() % 90 + 10;
        }
    }
}

void replace(int** array, int n, int m) {
    if (n <= m) {
        for (int i = 0; i < n; i++) {
            for (int j = m - n; j < m - i; j++) { //делаем сдвиг на первые m-n столбцов, которые не нужно изменять.
                int x = array[i][j];
                array[i][j] = array[n - j - 1 + (m - n)][m - i - 1];
                array[n - j - 1 + (m - n)][m - i - 1] = x;
            }
        }
    }
    else { //число строк больше числа столбцов, поэтому цикл просто проходит до последнего столбца, рассматривая матрицу как квадратную, не учитывая последние n-m строк.
        for (int i = 0; i < m; i++){
            for (int j = 0; j < m - i - 1; j++){
                int x = array[i][j];
                array[i][j] = array[m - j - 1][m - i - 1];
                array[m - j - 1][m - i - 1] = x;
            }
        }
    }
}


int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int n, m;
    cout << "Введите размерность матрицы: " << endl;
    cin >> n >> m;
    int** mas = new int* [n];
    for (int i = 0; i < n; i++) {
        mas[i] = new int[m];
    }
    random_array(mas, n, m);
    print_array(mas, n, m);
    cout << endl;
    replace(mas, n, m);
    cout << "Матрица, с поменянными элементами симметрично побочной диагонали: " << endl<<endl;
    print_array(mas, n, m);
    delete_array(mas,n);

}
