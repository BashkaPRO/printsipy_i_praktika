#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS

#include "std_lib_facilities.h" 

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "¬веди значение с плавающей точкой";
	double n;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nтри раза по n== " << 3 * n
		<< "\nдва раза по n== " << n + n
		<< "\nn в квадрате== " << n*n
		<< "\nполовина n == " << n / 2
		<< "\nкорень квадратный из n == " << sqrt(n)
		<< endl;

	keep_window_open(); //лучше использовать getch(); 
	return 0;
}