// Volodina_exam184.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Написать класс, содержащий метод, находящий два числа, произведение которых является максимальным в заданной последовательности чисел. Последовательность задается массивом и передаются в виде параметра метода. Показать пример использования реализованного класса.

#include <iostream>
#include <locale.h>
using namespace std;

class Maxmin
{
public:

	int proizvedenie(int* a, int n)
	{
		int prod = INT_MIN;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (a[i] * a[j] > prod && i != j)
				{
					prod = a[i] * a[j];
				}
		return prod;
	}
};
int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "Введите количество чисел в последовательности: " << endl;
	cin >> n;
	int* a = new int[n];
	cout << endl << "Введите последовательность из " << n << " чисел:" << endl;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	Maxmin max;
	cout << max.proizvedenie(a, n);
}
