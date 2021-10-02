#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a;
    int b;
    cin >> a;
    b = abs(a);
    if ((b / 100 >= 1) && (b / 100 <= 9))
        cout << "Число " << a << " - трёхначное";
    else
        cout << "Число " << a << " - НЕ трёхначное";

}
