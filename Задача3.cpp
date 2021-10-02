
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
    if (num <= 0 or n > 10000000) {
        cout << "Вы ввели недопустимое значение";
        return 0;
    }
    if (n <= 10000000)
    {


    }
    switch (n / 1000000) {   //с
    case 1:
        cout << "Один миллион ";
        break;
    case 2:
        cout << "Два миллиона ";
        break;
    case 3:
        cout << "Три миллиона ";
        break;
    case 4:
        cout << "Четыре миллиона ";
        break;
    case 5:
        cout << "Пять миллионов ";
        break;
    case 6:
        cout << "Шесть миллионов ";
        break;
    case 7:
        cout << "Семь миллионов ";
        break;
    case 8:
        cout << "Восемь миллионов ";
        break;
    case 9:
        cout << "Девять миллионов ";
        break;
    case 10:
        cout << "Десять миллионов ";
        break;
    default:
        break;
    }
    switch ((n / 100000) % 10) {   //сотни тысяч
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
        cout << "пятьсот ";
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
        cout << "девятьсот ";
        break;
    default:
        break;

    }
    if ((n / 1000) % 100 > 10 and (n / 1000) % 100 < 20) {
        switch ((n / 1000) % 100) {
        case 11:
            cout << "одиннадцать тысяч ";
            break;
        case 12:
            cout << "двенадцать тысяч ";
            break;
        case 13:
            cout << "тринадцать тысяч ";
            break;
        case 14:
            cout << "четырнадцать тысяч ";
            break;
        case 15:
            cout << "пятнадцать тысяч ";
            break;
        case 16:
            cout << "шестнадцать тысяч ";
            break;
        case 17:
            cout << "семьнадцать тысяч ";
            break;
        case 18:
            cout << "восемнадцать тысяч ";
            break;
        case 19:
            cout << "девятнадцать тысяч ";
            break;
        default:
            break;






        }

    }
    else {
        switch ((n / 10000) % 10) {  //десятки тысяч по единицам
        case 1:
            cout << "десять ";
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
            cout << "пятьдесят ";
            break;
        case 6:
            cout << "шестьдесят ";
            break;
        case 7:
            cout << "семьдесят ";
            break;
        case 8:
            cout << "восемьдесят ";
            break;
        case 9:
            cout << "девяноста ";
            break;
        default:
            break;

        }
        if (n >= 1000) {
            switch ((n / 1000) % 10) {  //единицы тысяч
            case 0:
                if ((n / 10000 % 10 != 0) or (n / 100000 % 10 != 0)) {
                    cout << "тысяч ";
                }
                break;
            case 1:
                cout << "одна тысяча ";
                break;
            case 2:
                cout << "две тысячи ";
                break;
            case 3:
                cout << "три тысячи ";
                break;
            case 4:
                cout << "четыре тысячи ";
                break;
            case 5:
                cout << "пять тысяч ";
                break;
            case 6:
                cout << "шесть тысяч ";
                break;
            case 7:
                cout << "семь тысяч ";
                break;
            case 8:
                cout << "восемь тысяч ";
                break;
            case 9:
                cout << "девять тысяч ";
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
        cout << "пятьсот ";
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
        cout << "девятьсот ";
        break;
    default:
        break;

    }
    if (n % 100 >= 10 and n % 100 < 20) {
        switch (n % 100) {
        case (10):
            cout << "десять ";
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
            cout << "пятнадцать ";
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
            cout << "девятнадцать ";
            break;
        default:
            break;

        }
    }
    else {
        switch (n % 100 / 10) {
        case 1:
            cout << "десять ";
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
            cout << "пятьдесят ";
            break;
        case 6:
            cout << "шестьдесят ";
            break;
        case 7:
            cout << "семьдесят ";
            break;
        case 8:
            cout << "восемьдесят ";
            break;
        case 9:
            cout << "девяноста ";
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
            cout << "пять";
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
            cout << "девять";
            break;
        default:
            break;
        }
    }



}

