/* пример программы, подсчитывающей сумму двух целых чисел, значения
которых вводятся с клавиатуры, а результат выводится на экран */

#include <iostream>
using namespace std;
int main()
{
	int a, b;
		cout << "Введите 2 целых числа" << endl;
		cin >> a >> b;
		cout << "Их сумма равна " << a + b;
		return 0;
}