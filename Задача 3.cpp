
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
        cout << "�� ����� ������������ ��������";
        return 0;
    }
    if (n <= 10000000)
    {


    }
    switch (n / 1000000) {   //�
    case 1:
        cout << "���� ������� ";
        break;
    case 2:
        cout << "��� �������� ";
        break;
    case 3:
        cout << "��� �������� ";
        break;
    case 4:
        cout << "������ �������� ";
        break;
    case 5:
        cout << "���� ��������� ";
        break;
    case 6:
        cout << "����� ��������� ";
        break;
    case 7:
        cout << "���� ��������� ";
        break;
    case 8:
        cout << "������ ��������� ";
        break;
    case 9:
        cout << "������ ��������� ";
        break;
    case 10:
        cout << "������ ��������� ";
        break;
    default:
        break;
    }
    switch ((n / 100000) % 10) {   //����� �����
    case 1:
        cout << "��� ";
        break;
    case 2:
        cout << "������ ";
        break;
    case 3:
        cout << "������ ";
        break;
    case 4:
        cout << "��������� ";
        break;
    case 5:
        cout << "������� ";
        break;
    case 6:
        cout << "�������� ";
        break;
    case 7:
        cout << "������� ";
        break;
    case 8:
        cout << "��������� ";
        break;
    case 9:
        cout << "��������� ";
        break;
    default:
        break;

    }
    if ((n / 1000) % 100 > 10 and (n / 1000) % 100 < 20) {
        switch ((n / 1000) % 100) {
        case 11:
            cout << "����������� ����� ";
            break;
        case 12:
            cout << "���������� ����� ";
            break;
        case 13:
            cout << "���������� ����� ";
            break;
        case 14:
            cout << "������������ ����� ";
            break;
        case 15:
            cout << "���������� ����� ";
            break;
        case 16:
            cout << "����������� ����� ";
            break;
        case 17:
            cout << "����������� ����� ";
            break;
        case 18:
            cout << "������������ ����� ";
            break;
        case 19:
            cout << "������������ ����� ";
            break;
        default:
            break;






        }

    }
    else {
        switch ((n / 10000) % 10) {  //������� ����� �� ��������
        case 1:
            cout << "������ ";
            break;
        case 2:
            cout << "�������� ";
            break;
        case 3:
            cout << "�������� ";
            break;
        case 4:
            cout << "����� ";
            break;
        case 5:
            cout << "��������� ";
            break;
        case 6:
            cout << "���������� ";
            break;
        case 7:
            cout << "��������� ";
            break;
        case 8:
            cout << "����������� ";
            break;
        case 9:
            cout << "��������� ";
            break;
        default:
            break;

        }
        if (n >= 1000) {
            switch ((n / 1000) % 10) {  //������� �����
            case 0:
                if ((n / 10000 % 10 != 0) or (n / 100000 % 10 != 0)) {
                    cout << "����� ";
                }
                break;
            case 1:
                cout << "���� ������ ";
                break;
            case 2:
                cout << "��� ������ ";
                break;
            case 3:
                cout << "��� ������ ";
                break;
            case 4:
                cout << "������ ������ ";
                break;
            case 5:
                cout << "���� ����� ";
                break;
            case 6:
                cout << "����� ����� ";
                break;
            case 7:
                cout << "���� ����� ";
                break;
            case 8:
                cout << "������ ����� ";
                break;
            case 9:
                cout << "������ ����� ";
                break;
            default:
                break;

            }
        }

    }
    switch ((n / 100) % 10) {   //�����
    case 1:
        cout << "��� ";
        break;
    case 2:
        cout << "������ ";
        break;
    case 3:
        cout << "������ ";
        break;
    case 4:
        cout << "��������� ";
        break;
    case 5:
        cout << "������� ";
        break;
    case 6:
        cout << "�������� ";
        break;
    case 7:
        cout << "������� ";
        break;
    case 8:
        cout << "��������� ";
        break;
    case 9:
        cout << "��������� ";
        break;
    default:
        break;

    }
    if (n % 100 >= 10 and n % 100 < 20) {
        switch (n % 100) {
        case (10):
            cout << "������ ";
            break;
        case (11):
            cout << "����������� ";
            break;
        case (12):
            cout << "���������� ";
            break;
        case (13):
            cout << "���������� ";
            break;
        case (14):
            cout << "������������ ";
            break;
        case (15):
            cout << "���������� ";
            break;
        case (16):
            cout << "����������� ";
            break;
        case (17):
            cout << "���������� ";
            break;
        case (18):
            cout << "������������ ";
            break;
        case (19):
            cout << "������������ ";
            break;
        default:
            break;

        }
    }
    else {
        switch (n % 100 / 10) {
        case 1:
            cout << "������ ";
            break;
        case 2:
            cout << "�������� ";
            break;
        case 3:
            cout << "�������� ";
            break;
        case 4:
            cout << "����� ";
            break;
        case 5:
            cout << "��������� ";
            break;
        case 6:
            cout << "���������� ";
            break;
        case 7:
            cout << "��������� ";
            break;
        case 8:
            cout << "����������� ";
            break;
        case 9:
            cout << "��������� ";
            break;
        default:
            break;

        }

        switch (n % 10) {
        case (1):
            cout << "����";
            break;
        case (2):
            cout << "���";
            break;
        case (3):
            cout << "���";
            break;
        case (4):
            cout << "������";
            break;
        case (5):
            cout << "����";
            break;
        case (6):
            cout << "�����";
            break;
        case (7):
            cout << "����";
            break;
        case (8):
            cout << "������";
            break;
        case (9):
            cout << "������";
            break;
        default:
            break;
        }
    }



}

