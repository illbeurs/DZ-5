#include <iostream>
using namespace std;
void simple(int n, int a) {
	int k = 2;
	if (n != 1 and (n % k == 0)) {
		simple(n / k,a);
	}
		
	if (n!=1 and (n%k!=0)) {
		while (n % k != 0) {
			k++;
		}
			simple(n/k,a);
		

	}
	if (n != 1) {
		cout << k;
	
	if (n!=a and n!=1){ // я не знал как по другому правильно расставить знаки умножения между множителями, поэтому ввел "а" :с
		cout << " * ";
	}

}
int main() {
	int n;
	cout << "Enter a number: " << endl;
	cin >> n;
	int a = n;
	cout<<"Your number in simple multipliers: "<<endl;
	simple(n,a);

}
