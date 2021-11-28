#include <iostream>
#include <windows.h>
using namespace std;
void resh(char s[], const int k) {
	int j = 0;
	for (int i = 0; i < strlen(s); i++) { // записать строку без пробелов
		if (s[i] != ' ') {
			s[j] = s[i];
			j++;
		}

	}
	s[j] = '\0';

	
	char z[50];
	int q = 0;
	for (int i = strlen(s) - 1; i >= 0; i--) { //вспомогательная строка,  в которой записана изначальная строка (уже без пробелов) наоборот.
		z[q] = s[i];
		q++;
	}
	z[q] = '\0';
	if (strcmp(s,z)==0) {
		cout << "Введенное слово - палиндром";
	}
	else { cout << "Введенное слово - НЕ палиндром"; }
	
	

}
int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int k = 50;
	char s[k];
	cout << "Введите слово или фразу (с маленькой буквы): " << endl;
	cin.getline(s, k);
	resh(s, k);

}
