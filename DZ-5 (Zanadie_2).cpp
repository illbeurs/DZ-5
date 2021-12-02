#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void resh(char s[], const int n) {
	char* o = NULL;
	int sum = 0;
	char* x = strtok_s(s, "+", &o);
	while (x != NULL)
	{
		sum += atoi(x);
		x = strtok_s(NULL, "+", &o);

	}
	cout <<"Введенная сумма в виде числа: " <<sum;

}


int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int n = 50;
	char s[n];
	cout << "Введите строчную сумму (например 1+25+33): " << endl;
	cin.getline(s, n);
	resh(s, n);

}
