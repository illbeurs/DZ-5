#include <iostream>
using namespace std;
int del(int x) {
    int z = 1;
    int sum = 0;
    int y = (x / 2);
    while (z <= y) {
        if (x % z == 0) {
            sum += z;
        }
        z++;
    }
    return sum;
}
int main() {
    cout << "Friendly numbers < 10000: "<<endl;
    for (int k = 1; k <= 10000; k++) {
        for (int i = k; i <= k+1000; i++) { // проверяет до k+1000 в целях оптимизации, т.к дружественные числа < 10000 не отличаются больше, чем на 1000 p.s можно проверять и i до 10000, но тогда программа считает это от 5 до 30 минут в зависимости от компуктера.
            if (k != i && del(i) == k && del(k) == i && k < i) {
                cout << k << " ; " << i << endl;
            }
        }
    }
