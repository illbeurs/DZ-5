#include <iostream>
using namespace std;
long long fib(int n) {
	
	long long num=0;
	long long a = 1;
	long long c;
	for (int k = 2; k <= n; k++) {
		c = num;
		num = num + a;
		a = c;
		
		
	}
	if (n == 1) {
		num = 0;
	}
	return num;



}
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите номер числа Фибоначчи: " << endl;
	cin >> n;
	cout << n << "-e число Фибоначчи: " << fib(n);
}
