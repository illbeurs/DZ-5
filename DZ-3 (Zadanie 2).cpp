#include <iostream>
#include <cmath>
using namespace std;
void bin(int n, int k, int &sum) {
	int m;
	m = n % 10;
	n = n / 10;

	if (n != 0) {
		bin(n, k + 1, sum);

	}
	sum = sum + m*pow(2, k);
	if (k == 0) {
		cout <<"Your digit in decimal number system: " << sum;
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	int k = 0;
	int n;
	cout << "Enter a number in binary:" << endl;
	cin >> n;
	int sum = 0;
	bin(n, k,sum);

}
