#include <iostream>
#include <windows.h>
#include <clocale>
using namespace std;
int  index_zad4(char s[], const int n) { // индекс элемента, с которого начинается расширение или индекс последнего элемента в случае отсутсвия расширения
	int i = 0;
	char* z = s;
	int f = strlen(s);
	while (z[i] != '.') {
		i++;
		if (i == f) {
			break;
		}
	}
	return i;
}
void resh_zad4() {
	const int n = 30;
	char s[n];
	cout << "Введите название файла: " << endl;
	cin.getline(s, n);
	char x[] = ".bak";
	strcpy_s(s + index_zad4(s, n), 5, x);
	cout <<"Исходный файл в расширении .bak: "<<endl<< s;
}
int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	resh_zad4();
}
