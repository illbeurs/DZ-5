
#include <iostream>
#include <cmath>
using namespace std;
int
main()
{
    setlocale(LC_ALL, "Russian");

    int num, n;
    cin >> num;
    n = abs(num);
    if (num <=0 or n > 10000000) {
        cout << "¬ы ввели недопустимое значение";
        return 0;
    }
    if (n <= 10000000)
    {


    }
    switch (n / 1000000) {   //с
    case 1:
        cout << "ќдин миллион ";
        break;
    case 2:
        cout << "ƒва миллиона ";
        break;
    case 3:
        cout << "“ри миллиона ";
        break;
    case 4:
        cout << "„етыре миллиона ";
        break;
    case 5:
        cout << "ѕ€ть миллионов ";
        break;
    case 6:
        cout << "Ўесть миллионов ";
        break;
    case 7:
        cout << "—емь миллионов ";
        break;
    case 8:
        cout << "¬осемь миллионов ";
        break;
    case 9:
        cout << "ƒев€ть миллионов ";
        break;
    case 10:
        cout << "ƒес€ть миллионов ";
        break;
    default:
        break;
    }
    switch ((n / 100000) % 10) {   //сотни тыс€ч
    case 1:
        cout << "сто ";
        break;
    case 2:
        cout << "двести ";
        break;
    case 3:
        cout << "триста ";
        break;
    case 4:
        cout << "четыреста ";
        break;
    case 5:
        cout << "п€тьсот ";
        break;
    case 6:
        cout << "шестьсот ";
        break;
    case 7:
        cout << "семьсот ";
        break;
    case 8:
        cout << "восемьсот ";
        break;
    case 9:
        cout << "дев€тьсот ";
        break;
    default:
        break;

    }
    if ((n / 1000) % 100 > 10 and (n / 1000) % 100 < 20) {
        switch ((n / 1000) % 100) {
        case 11:
            cout << "одиннадцать тыс€ч ";
            break;
        case 12:
            cout << "двенадцать тыс€ч ";
            break;
        case 13:
            cout << "тринадцать тыс€ч ";
            break;
        case 14:
            cout << "четырнадцать тыс€ч ";
            break;
        case 15:
            cout << "п€тнадцать тыс€ч ";
            break;
        case 16:
            cout << "шестнадцать тыс€ч ";
            break;
        case 17:
            cout << "семьнадцать тыс€ч ";
            break;
        case 18:
            cout << "восемнадцать тыс€ч ";
            break;
        case 19:
            cout << "дев€тнадцать тыс€ч ";
            break;
        default:
            break;






        }

    }
    else {
        switch ((n / 10000) % 10) {  //дес€тки тыс€ч по единицам
        case 1:
            cout << "дес€ть ";
            break;
        case 2:
            cout << "двадцать ";
            break;
        case 3:
            cout << "тридцать ";
            break;
        case 4:
            cout << "сорок ";
            break;
        case 5:
            cout << "п€тьдес€т ";
            break;
        case 6:
            cout << "шестьдес€т ";
            break;
        case 7:
            cout << "семьдес€т ";
            break;
        case 8:
            cout << "восемьдес€т ";
            break;
        case 9:
            cout << "дев€носта ";
            break;
        default:
            break;

        }
        if (n >= 1000) {
            switch ((n / 1000) % 10) {  //единицы тыс€ч
            case 0:
                if ((n / 10000 % 10 != 0) or (n / 100000 % 10 != 0)) {
                    cout << "тыс€ч ";
                }
                break;
            case 1:
                cout << "одна тыс€ча ";
                break;
            case 2:
                cout << "две тыс€чи ";
                break;
            case 3:
                cout << "три тыс€чи ";
                break;
            case 4:
                cout << "четыре тыс€чи ";
                break;
            case 5:
                cout << "п€ть тыс€ч ";
                break;
            case 6:
                cout << "шесть тыс€ч ";
                break;
            case 7:
                cout << "семь тыс€ч ";
                break;
            case 8:
                cout << "восемь тыс€ч ";
                break;
            case 9:
                cout << "дев€ть тыс€ч ";
                break;
            default:
                break;

            }
        }

    }
    switch ((n / 100) % 10) {   //сотни
    case 1:
        cout << "сто ";
        break;
    case 2:
        cout << "двести ";
        break;
    case 3:
        cout << "триста ";
        break;
    case 4:
        cout << "четыреста ";
        break;
    case 5:
        cout << "п€тьсот ";
        break;
    case 6:
        cout << "шестьсот ";
        break;
    case 7:
        cout << "семьсот ";
        break;
    case 8:
        cout << "восемьсот ";
        break;
    case 9:
        cout << "дев€тьсот ";
        break;
    default:
        break;

    }
    if (n % 100 >= 10 and n % 100 < 20) {
        switch (n % 100) {
        case (10):
            cout << "дес€ть ";
            break;
        case (11):
            cout << "одиннадцать ";
            break;
        case (12):
            cout << "двенадцать ";
            break;
        case (13):
            cout << "тринадцать ";
            break;
        case (14):
            cout << "четырнадцать ";
            break;
        case (15):
            cout << "п€тнадцать ";
            break;
        case (16):
            cout << "шестнадцать ";
            break;
        case (17):
            cout << "семнадцать ";
            break;
        case (18):
            cout << "восемнадцать ";
            break;
        case (19):
            cout << "дев€тнадцать ";
            break;
        default:
            break;

        }
    }
    else {
        switch (n % 100 / 10) {
        case 1:
            cout << "дес€ть ";
            break;
        case 2:
            cout << "двадцать ";
            break;
        case 3:
            cout << "тридцать ";
            break;
        case 4:
            cout << "сорок ";
            break;
        case 5:
            cout << "п€тьдес€т ";
            break;
        case 6:
            cout << "шестьдес€т ";
            break;
        case 7:
            cout << "семьдес€т ";
            break;
        case 8:
            cout << "восемьдес€т ";
            break;
        case 9:
            cout << "дев€носта ";
            break;
        default:
            break;

        }

        switch (n % 10) {
        case (1):
            cout << "один";
            break;
        case (2):
            cout << "два";
            break;
        case (3):
            cout << "три";
            break;
        case (4):
            cout << "четыре";
            break;
        case (5):
            cout << "п€ть";
            break;
        case (6):
            cout << "шесть";
            break;
        case (7):
            cout << "семь";
            break;
        case (8):
            cout << "восемь";
            break;
        case (9):
            cout << "дев€ть";
            break;
        default:
            break;
        }
    }



}

