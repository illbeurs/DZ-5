#include <iostream>
#include <windows.h>
#include <clocale>
using namespace std;
void resh_zad5() {
	const int n = 30;
	char str[n];
	cout << "Введите строку: " << endl;
	gets_s(str, n);
	char str1[n]; //заданное слово
	cout << "Введите заданное слово: " << endl;
	cin >> str1;
	int temp = 0;
	for (int i = 0; i < strlen(str); i++) {
		if ((str[i] == str1[0]) and ((strlen(str) - i) >= strlen(str1))) { //сравниваем каждый символ строки с первым символов заданного слова + оценка длины
			int k = i;
			int l = 0;
			for (int j = 0; j < strlen(str1); j++) { //дальнейшее посимвольное сравнение
				if (str[k] == str1[j]) { l++; }
				k++;
			}
			if (l == strlen(str1)) { temp++; }
		}
	}
	cout << "Заданное слово встречается в строке " << temp << " раз(а)";
}
int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    resh_zad5();
}
