#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <string>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

int capitalize(char* str) // Функция перевода в верхний регистр 
{
    int k = strlen(str);
    for (int i = 0; i < k; i++)
    {
        if (str[i] == 'я')
        {
            str[i] = 'Я';
        }
        else
        {
            str[i] = toupper(str[i]);
        }
        
    }
    return k;
}
void CodeMessage()
{
    const int COL = 5, ROW = 7;
    int index_of_sym1_r, index_of_sym1_c, index_of_sym2_r, index_of_sym2_c; // для хранения индеков символов "пары2
    char sym1, sym2; // для хранения символов "пары"
    char user_message[255], space_add[2] = " "; // строки для хранения введенного сообщения и добавочного пробела в случае нечетности строки 
    string coded_message; // строка заданная классом string для хранения в ней закодированного сообщения 
    const char Table1[ROW][COL] // таблица алфавита 1 
    {
        {'Ж','Щ','Н','Ю','Р'},
        {'И','Т','Ь','Ц','Б'},
        {'Я','М','Е','.','С'},
        {'В','Ы','П','Ч',' '},
        {'Й','Д','У','О','К'},
        {'З','Э','Ф','Г','Ш'},
        {'Х','А',',','Л','Ъ'}
    };
    const char Table2[ROW][COL] // таблица алфавита 2
    {
        {'И','Ч','Г','Я','Т'},
        {',','Ж','Ь','М','О'},
        {'З','Ю','Р','В','Щ'},
        {'Ц','Й','П','Е','Л'},
        {'Ъ','А','Н','.','Х'},
        {'Э','К','С','Ш','Д'},
        {'Б','Ф','У','Ы',' '}
    };
    cout << "Введите сообщение: ";
    cin.getline(user_message, 255);
    // Начало кодировки запроса 
    int userm_len = strlen(user_message); // Получение длины пользовательского сообщения 
    if (userm_len % 2 > 0)    //  Добавление пробела в случае нечетности строки 
    {
        strcat_s(user_message, space_add);
    }
    capitalize(user_message); // Перевод в верхний регистр 
    // Шифрование 
    for (int i = 0; i < userm_len; i += 2) // Основной цикл составления закодированной строки 
    {
        sym1 = user_message[i]; // Запись первого символа пары 
        sym2 = user_message[i + 1]; // Запись второго символа пары 
        for (int j = 0; j < ROW; j++) // Перебор массива для поиска нужных элементов 
        {
            for (int k = 0; k < COL; k++)
            {
                if (Table1[j][k] == sym1)
                {
                    index_of_sym1_r = j;
                    index_of_sym1_c = k;
                }
                if (Table2[j][k] == sym2)
                {
                    index_of_sym2_r = j;
                    index_of_sym2_c = k;
                }
            }
        }
        // Работа с индексами. "Построение условных прямоугольников"     
        if (index_of_sym1_c == index_of_sym2_c) // реализация принципов прямоугольника 
        {
            coded_message = coded_message + Table1[index_of_sym2_r][index_of_sym2_c];
            coded_message = coded_message + Table2[index_of_sym1_r][index_of_sym1_c];
        }
        else
        {
            coded_message = coded_message + Table1[index_of_sym1_r][index_of_sym2_c];
            coded_message = coded_message + Table2[index_of_sym2_r][index_of_sym1_c];
        }

    }
    
    cout << "Ваше преобразованное сообщение: " << coded_message << endl; // Вывод закодированного сообщения 
}

void main()
{
    int f;
    SetConsoleOutputCP(1251); // Установка кодировок для корректного отоброжения русского языка в консоли 
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Ru"); // Локализация русских символов 
    cout << "Какое действие выполнить, декордировать(1) или закодировать(2)?" << endl;
    cin >> f;
    cin.ignore();
    switch (f)
    {
    case 1:
        
        CodeMessage();
        break;
    case 2:
       
        CodeMessage();
        break;
    default:
        cout << "Недопустимое значение, допустимые значения: 1, 2" << endl;
        break;
    }

}