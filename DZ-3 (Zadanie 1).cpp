#include <iostream>
using namespace std;
void raz(int n) {
	int m;
	m = n % 10;
	if (n>9) { raz(n / 10); }
	cout << m << " ";
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Enter a natural number: " << endl;
	cin >> n;
	raz(n);

}
