#include <iostream>
using namespace std;

void main()
{

	long long f=1; // факториал числа введенного с клавы
	int n;
	setlocale(LC_ALL, "");
	cout << "¬ведите число дл€ вычислени€ факториала: "; cin >> n;
	for (int i = 1;	i <=n;	i++)
	{
		cout << i << "!=";
		f *= i;
		cout << f<<endl;
	}
	cout << endl;
}