#include <iostream>
#include <ctime>

using namespace std;
int kuk (int x)
{
  int a, b;
  if (x == 1)
    {
      a = rand () % 6 + 1;
      b = rand () % 6 + 1;
    }
  else
    {
      cout << "Ну нет, так нет :(";
      return 0;
    }
  cout << "На первом кубике выпало: " << a << endl;
  cout << "На втором кубике выпало: " << b<< endl;
  cout << "Итоговая сумма значений: " << a + b;
}

int main ()
{
  setlocale (LC_ALL, "Russian");
  srand (time (0));
  cout <<
    "Если вы хотите бросить кубики, введите 1";
  int x;
  cin >> x;
  kuk (x);}
    
