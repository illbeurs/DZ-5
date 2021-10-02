#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int day, mth;
    cout << "Введите дату в формате дд.м" << endl;
    cout << "День: ";
    cin >> day;
    cout << "Месяц: ";
    cin >> mth;
    int x = 0;
    if (mth == 2 and (day <= 0 or day > 28)) {
        cout << "Вы ввели неверную дату";
        return 0;
    }
    if (day > 0 and day <= 31 and mth >= 1 and mth <= 12) {
        switch (mth) {
        case 1:
            x = 365 - day;
            break;
        case 2:
            x = 365 - 31 - day;
            break;
        case 3:
            x = 365 - 31 - 28 - day;
            break;
        case 4:
            if (day < 31)
                x = 365 - 31 - 28 - 31 - day;
            break;
        case 5:
            x = 365 - 31 - 28 - 31 - 30 - day;
            break;
        case 6:
            if (day < 31)
                x = 365 - 31 - 28 - 31 - 30 - 31 - day;
            break;
        case 7:
            x = 365 - 31 - 28 - 31 - 30 - 31 - 30 - day;
            break;
        case 8:
            x = 153 - day;
            break;
        case 9:
            if (day < 31)
                x = 153 - 31 - day;
            break;

        case 10:
            x = 153 - 31 - 30 - day;
            break;
        case 11:
            if (day < 31)
                x = 153 - 31 - 30 - 31 - day;
            break;
        case 12:
            x = 153 - 31 - 30 - 31 - 30 - day;
            break;



        }

        if (x == 0 and mth != 12) {
            cout << "Вы ввели неверную дату";
            return 0;
        }
        cout << "Дни, оставшиеся до Нового Года: " << x + 1;

    }
    else {
        cout << "Вы ввели неверную дату";
        return 0;
    }
}
