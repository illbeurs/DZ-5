#include <iostream>
using namespace std;
long long sex(int n) {
	
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
	if (n == 2) {
		cout << "2-e число Фибоначчи: " << "1";
		return 0;
	}
	cout << n << "-e число Фибоначчи: " << sex(n);
}