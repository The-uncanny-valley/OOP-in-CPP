#include <iostream> /* директива препроцессора указывает препроцессору включить в компилируемый файл содержимое заголовочного файла
файл IOSTREAM содержит описания, необходимые для работы с переменной cout */
using namespace std; // директива using означает, что все определенные ниже имена будут относиться к пространству имен с именем std

int main() { // при запуске программы управление всегда передаётся функции main
  double gal;
  cin >> gal;
  cout << (gal / 7.481);
  return 0;
}