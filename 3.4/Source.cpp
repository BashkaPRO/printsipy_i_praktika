#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS

#include "std_lib_facilities.h" 

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "����� �������� � ��������� ������";
	double n;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\n��� ���� �� n== " << 3 * n
		<< "\n��� ���� �� n== " << n + n
		<< "\nn � ��������== " << n*n
		<< "\n�������� n == " << n / 2
		<< "\n������ ���������� �� n == " << sqrt(n)
		<< endl;

	keep_window_open(); //����� ������������ getch(); 
	return 0;
}