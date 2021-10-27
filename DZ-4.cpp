#include <iostream>
#include <time.h>
using namespace std;
void print_array(int array[], const int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}
void zadanie_1_progression(int A[], const int X) {
	int a, b;
	cout << "1) Введите первый элемент арифметической прогрессии и ее разность: " << endl;
	cin >> a >> b;
	A[0] = a;
	for (int i = 1; i < X; i++) {
		A[i] = a + b;
		a = A[i];


	}
	cout << "Массив, заполненный элементами арифметической прогрессии: " << endl;
	print_array(A, X);
}
void zadanie_2_random_replace(int B[], const int N) {
	cout << "Массив, заполненный числами от 1 до N в случайном порядке: " << endl;
	int* mas = new int[N];
	for (int i = 0; i < N; i++)	mas[i] = i + 1;
	int n = N;
	for (int i = 0; i < N; i++)
	{
		bool flag = 1;
		while (flag) {
			int k = rand()%n;
			if (mas[k] != -1) {
				B[i] = mas[k];
				mas[k] = -1;
				flag = 0;
			}
		}
	
	}
        delete[]mas;
	print_array(B, N);
}
void zadanie_3_random_сounter(int C[], const int Y){
	int count = 0;
	for (int i = 0; i < Y; i++) {
		C[i] = rand() % 1001 + 1000;
		if ((C[i] / 10 % 10 != 0) and ((C[i] / 10 % 10) % 2 == 0)) {
			count += 1;
		}


	}
	cout << "Массив из Y элементов, заполненный случайными числами от 1000 до 2000: " << endl;
	print_array(C, Y);
	cout << "Число элементов, у которых вторая с конца цифра – чётная: " << count<<endl;

}

	
int main(){
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	const int X = 10;
	int A[X];
	  zadanie_1_progression(A, X);
	int N;
	cout << "2) Введите N: " << endl;
	cin >> N;
	int* B = new int [N];
    zadanie_2_random_replace(B, N);
	 delete[]B;
	int Y;
	cout << "3) Введите Y: " << endl;
	cin >> Y;
	int* C = new int[Y];
	  zadanie_3_random_сounter(C, Y);
	 delete[]C;




	

}
